#include<iostream>
#include<cstring>
#include<stdlib.h>
using namespace std;

class A{
		public:
		virtual void fun(){cout<<1<<endl;}
		virtual void fun1(){cout<<2<<endl;}
};
class B:public A{
		public:
		void fun(){cout<<3<<endl;}
		void fun1(){cout<<4<<endl;}
};

int main()
{
		void(*fun)(A*);
		A *p = new B;
		long lVptrAddr;
		memcpy(&lVptrAddr,p,4);
		memcpy(&fun,reinterpret_cast<long*>(lVptrAddr),4);
		fun(p);
		delete p;
		system ("pause");
		return 0;
}
