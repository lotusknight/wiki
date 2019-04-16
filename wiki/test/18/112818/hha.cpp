#include<iostream>
using namespace std;

class A
{
		public:
		virtual void call(){cout<<"A"<<endl;}
		};
class B: public A
{
		public:
		void call(){cout<<"B"<<endl;}
		};


int main()
{

		A* a= new A;
		a->call();
		B* b=(B*)a;
		b->call();

cout<<"above means newA convert to B----------------------"<<endl;

		B* b1= new B;
		b1->call();
		A* a1= (A*)b1;
		a1->call();

cout<<"above means newB convert to A----------------------"<<endl;
		
		A a2;
		B b2;
		A *p1 = & a2;
		A *p2 = & b2;
		p1->call();
		p2->call();

cout<<"----------------------"<<endl;
		
		A* b3 = new B;
		b3->call();
/* doesn‘t allowed
		B* a3 = new A;
		a3->call();
*/

cout<<"----------------------"<<endl;
/* doesn‘t allowed
		A* a4 = new A;
		B *b4 = a4;
		b4->call();
*/
		B* b5 = new B;
		A *a5 = b5;
		a5->call();

		return 0;
}
