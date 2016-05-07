//#pragma  once
//#include<iostream>
//using namespace std;
//template<class T>
//class stack
//{
//public:
//
//    stack()
//		:_a(0)
//		,_top(0)
//		,_capacity(0)
//	{}
//
//	stack(const stack <T>& s)
//		:_a(new T[s._capacity])
//	    ,_top(s._top)
//		,_capacity(s._capacity)
//	{
//		int i=0;
//		for(i=0;i<s._top;i++)
//		{
//		_a[i]=s._a[i];
//		}
//
//	}
//	
//	stack<T>& operator=(const stack<T>& s)
//	{
//		if(this!=&s)
//		{
//			delete [] _a;
//			_a=new T [s._capacity*sizeof(T)];
//			int i=0;
//			for(i=0;i<_top;i++)
//			{
//			a[i]=s._a[i];
//			}
//			_top=s._top;
//			_capacity=s._capacity;
//
//		}
//		return *this;
//	}
//	
//	~stack()
//	{
//		if(_a!=NULL)
//		{
//		delete [] _a;
//		_a=NULL;
//		}
//	}
//	//ջ���ݺ���
//	void _checkcapacity()
//	{
//		if(_top==_capacity)
//		{
//		_capacity=_capacity*2+3;
//		T* tmp=new T [_capacity];
//		int i=0;
//			for(i=0;i<_top;i++)
//			{
//			tmp[i]=_a[i];
//			}
//		delete [] _a;
//		_a=tmp;
//		}
//	
//	}
//	void push(const T& x);
//	void pop();
//	T& top();
//	bool empty();
//	size_t size();
//	void print();
//protected:
//	T * _a;
//	size_t _top;
//	size_t _capacity;
//};



#include<iostream>
using namespace std;
template<class T>
struct Node
{
	Node<T>* _next;
	T  _data;
	//���������
	Node( T data)
		:_next(NULL)
		,_data(data)
	{}
};
template<class T>
class queue
{
public:
	//���캯��
	queue()
		:_head(NULL)
		,_tail(NULL)

	{}
	//�������캯��
	queue(const queue<T>& q)
		:_head(NULL)
		,_tail(NULL)
		
	{
	   Node<T>*cur=q._head;
	   while(cur)
	   {
	   this->push(cur->_data);
	   cur=cur->_next;
	   }
	}
	//��ֵ���������
	queue<T>& operator=(const queue<T>& q)
	{
	if(this!=&q)
	{
		delete [] q;
	   Node<T>*cur=q._head;
	   while(cur)
	   {
	   this->push(cur->_data);
	   cur=cur->_next;
	   }
	   return *this;
	}
	}
	//��������
	~queue()
	{
		Node<T>* cur=_head;
	   if(cur)
		{
		Node<T>* del=cur;
		cur=cur->_next;
		delete del;
		del=NULL;
		}
	}
	//��ӣ��൱��β�庯��
	void push(const T& x)
	{
	Node<T>* newNode=new Node<T>(x);
		if(_head==NULL)
		{
		_head=newNode;
		_tail=_head;
		}
		else
		{
		_tail->_next=newNode;
		_tail=newNode;
		}
	}
	//���ӣ��൱��ͷ�庯��
	void pop()
	{
		if(_head!=NULL)
		{
	    Node<T>* del=_head;
	   _head=_head->_next;
	    delete del;
		}
	}
	//��ӡ����Ԫ��
	void print()
	{
	Node<T>* cur=_head;
		if(_head==NULL)
		{
		  return;
		}
		else
		{
			while(cur)
			{
			cout<<cur->_data<<" ";
			cur=cur->_next;
			}
			cout<<"over"<<endl;
		}
	}
	//�����ͷԪ��
	T&Front()
	{
	 if(!Empty)
	 {
	   return _head->_data;
	 }
	}
	//�����βԪ��
	T& Back()
	{
	if(!Empty)
	 {
	   return _tail->_data;
	 }
	}
	//�ж϶����Ƿ�Ϊ��
	bool Empty()
	{
	return (_head==NULL);
	}
protected:
	Node<T>*_head;
	Node<T>*_tail;

};