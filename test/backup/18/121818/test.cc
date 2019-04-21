#include<iostream>
using namespace std;

struct line
{
		int data;
		line *next;
		};

int main()
{

//version 1
		/*
		line a[5];
		for(int i=0;i<5;i++){a[i].next=&a[i+1];};
		for(int i=0;i<5;i++){cin>>a[i].data;};
		for(int i=0;i<4;i++){cout<<a[i].next->data<<"  ";};
		*/

//version 2
		line *a = new line[5];
		for(int i=0;i<5;i++){(a+i)->next=(a+i+1);};
		for(int i=0;i<5;i++){cin>>(a+i)->data;};
		for(int i=0;i<4;i++){cout<<(a+i)->next->data<<"  ";};
		
		
		cout <<"yeah"<<endl;
		return 0;

		}
