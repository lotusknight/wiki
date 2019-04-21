#include<iostream>
using namespace std;

struct BiTreeNode{
		int data;
		BiTreeNode* lchild;
		BiTreeNode* rchild;
		}bi;


struct BiTree{
		bool a;
		};

void buildtree(short a){
		cout<<"addNode: "<<a<<endl;};

int main(){
		cout<<"we use first scan to build a tree, first input its root,"<<endl;
		cout<<"then the left one, then the right one"<<endl;
		cout<<"case \"R\" for right,\"B\" for back to parent,\"O\" for over"<<endl;
        short i;
		while(cin>>i){
				switch(i){
				case 1:
				case 2:
				case 3:
				case 4:
				case 5:
				case 6:
				case 7:
				case 8:
				case 9: buildtree(i);break;
				case 82: cout<<"R for right"<<endl;break;
				case 66: cout<<"B for parent"<<endl;break;
				case 79: cout<<"O for over"<<endl;break;
				default: cout<<"wrong input"<<endl;
				
				};
			if (i=='O')break;	
				};
		





		return 0;
		}
