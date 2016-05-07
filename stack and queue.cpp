#define _CRT_SECURE_NO_WARNINGS 1
#include"stack and queue.h"
//#include<assert.h>
//using namespace std;
//
//template<class T>
//void stack<T>::print()
//{
//	while(!empty())
//	{
//	cout<<_top<<" ";
//	pop();
//	}
//	cout<<"over"<<endl;;
//}
//
//template<class T>
//void stack<T>::push(const T& x)
//{
//   _checkcapacity();
//   _a[_top++]=x;
//}
//
//template<class T>
//void stack<T>::pop()
//{
//	if(_top>0)
//	{
//		--_top;
//	}
//}
//template<class T>
//T& stack<T>::top()
//{
//	if(!empty())
//	{
//	return _a[_top-1];
//	}
//}
//
//template<class T>
//bool stack<T>::empty()
//{
//	return (_top==0);
//}
//
//
//void TestStack()
//{
//   stack<int> s1;
//   
//   s1.push(1);
//   s1.push(2);
//   s1.push(3);
//   s1.push(4);
// stack<int> s2(s1);
// stack<int> s3=s2;
//   s1.print();
//   s2.print();
//   s3.print();
//   /*cout<<s.top()<<endl;*/
//}
//int main()
//{
//	TestStack();
//	system("pause");
//	return 0;
//}

void TestQueue()
{
queue<int> q1;
q1.push(1);
q1.push(2);
q1.push(3);
q1.push(4);
queue<int> q2(q1);
queue<int> q3=q2;
q1.print();
q2.print();
q3.print();
}
int main()
{
TestQueue();
system("pause");
return 0;
}