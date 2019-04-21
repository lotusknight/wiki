#include<iostream>
#include<stdlib.h>
using namespace std;
typedef int ElemType;
typedef struct pNode{
		ElemType data;
		struct pNode *next;
}LinkList;

LinkList *Creat_LinkList()
{
		ElemType x;
		LinkList *head,*p;
		head = (LinkList*)malloc(sizeof(LinkList));
		if(head == NULL)
				return head;
		head -> next = NULL;
		cout<< "please input nums finished with 0" << endl;
		cin >> x;
		while(x!= 0)
		 {
				 p = (LinkList*)malloc(sizeof(LinkList));
				 if(p == NULL)
						 return head;
				 p -> data = x;
				 p -> next = head -> next;
				 head -> next = p;
				 cin >> x;
		 }
				 return head;
}

LinkList *Creat_LinkList_R()
{
		ElemType x;
		LinkList *head,*p,*tail;
		head = (LinkList*)malloc(sizeof(LinkList));
		if(head == NULL)
				return head;
		head -> next = NULL;
		tail = head;
		cout << "please input nums ended with 0" <<endl;
		cin >> x;
		while(x!=0)
		{
				p = (LinkList*) malloc(sizeof(LinkList));
				if (p==NULL)
						return head;
				p -> data = x;
				tail -> next = p;
				tail = p;
				tail -> next = NULL;
				cin >> x;
		 }
		 return head;
}

int Print_LinkList(LinkList *head)
{
		LinkList* p = head->next;
		if(p == NULL)
				return 0;
		while(p!=NULL)
		{
				cout << p -> data <<endl;
				p = p -> next;
				}
		return 1;
 }

int LinkList_Length(LinkList *head)
{
		ElemType num = 0;
		LinkList *p = head;
		while(p->next!=NULL)
		{
				num++;
				p = p->next;
		}
		return num;
 }		

LinkList *GetDara_LinkList(LinkList *head,int i)
 {
		LinkList *p = head;
		int num = 0;
		if (i<0)
			return NULL;
		while ((p->next!=NULL)&&(num<i))
		{
				num++;
				p = p -> next;
		}
		if (num == i)
				cout<< p -> data << endl;
		else
				return NULL;
 }
//https://blog.csdn.net/Poxiao2017/article/details/80445145
//unfinished

