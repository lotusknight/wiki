#include <iostream>
class X;
class A
{
		public:
		A(int num=0):dat(num){}
	//	A(const X& rhs):dat(rhs){}
		operator int() {return dat;}
		
		private:
		int dat;
};
class X
{
		public:
		X(int num=0):dat(num){}
		operator int() {return dat;}
		operator A(){
				A temp=dat;
				return temp;
				}
		
		private:
		int dat;
};

int main()
{
		X stuff = 37;
		A more = 0;
		int hold;
		hold = stuff;
		std::cout << hold << std::endl;
		more = stuff;
		std::cout << more << std::endl;
		return 0;
}


