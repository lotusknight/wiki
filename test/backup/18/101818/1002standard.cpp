#include<iostream>
#include<stdio.h>
#include<string.h>
#include<cstring>
using namespace std;
void upsidedown(char *s,int ans[],int lenth){for(int i=0;i<lenth;i++)ans[i]=s[lenth-1-i]-48;}
int add(char *a,char *b,int c[])
{
	int lenth_a,lenth_b,maxlenth;
	lenth_a=strlen(a);
	lenth_b=strlen(b);
	if(lenth_a>lenth_b)
		 maxlenth=lenth_a;
	else maxlenth=lenth_b;
	int aa[1005];
	int bb[1005];
	memset(aa,0,sizeof(aa));
	memset(bb,0,sizeof(bb));
	upsidedown(a,aa,lenth_a);
	upsidedown(b,bb,lenth_b);
	for(int i=0;i<maxlenth;i++)
	{c[i]=aa[i]+bb[i];
	}
    for(int i=0;i<maxlenth;i++)
	{
		c[i+1]+=c[i]/10;
		c[i]%=10;
	}
	return maxlenth;
}
int main()
{
	int time;
	cin>>time;
	getchar();
	char a[1005],b[1005];
	int c[1005];
	for(int i=0;i<time;i++)
	{memset(c,0,sizeof(c));
    scanf("%s",a);
    scanf("%s",b);
	int maxlenth=add(a,b,c);
	printf("Case %d:\n%s + %s = ",i+1,a,b);
	if(c[maxlenth]!=0)
		for(int i=maxlenth;i>=0;i--)
		{
			printf("%d",c[i]);
		}
		else
			for(int i=maxlenth-1;i>=0;i--)
			{
				printf("%d",c[i]);
			}
			printf("\n");
			if(i+1!=time)printf("\n");
	}
}