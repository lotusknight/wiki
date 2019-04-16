#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	int t,i,j,k;
	char a[1001],b[1001];
	cin>>t;
	for( k = 1;k <= t;++k)
	{
		int la = 0,lb = 0,len = 0;
		int c[1003]={0};
		cin>>a>>b;
		la = strlen(a);
		lb = strlen(b);
		cout<<"Case "<<k<<":"<<endl;
		cout<<a<<" + "<<b<<" = ";
		for(i = la-1,j = lb-1;i>=0&&j>=0;--i,--j)
		{
			c[len] += a[i]-'0'+b[j]-'0';
			if(c[len] > 9)
			{
				c[len] -= 10;
				++c[len+1];
			}
			++len;
		}
		
		if(i+1 > 0)
		{
			for(;i >= 0;--i)
			{
				c[len] += a[i]-'0';
				if(c[len] > 9)
				{
					c[len] -= 10;
					++c[len+1];
				}
				++len;
			}
		}
		
		if(j + 1 > 0)
		{
			for(;j >= 0;--j)
			{
				c[len] += b[j]-'0';
				if(c[len] > 9)
				{
					c[len] -= 10;
					++c[len+1];
				}
				++len;
			}
		}
		
		for( i = len;i >= 0;--i)
		{
			if(i == len&&c[i] != 0)
			  cout<<c[i];
			if(i != len)
			  cout<<c[i];
		}
		if( k < t)
		  cout<<endl;
		cout<<endl;
	}
	return 0;
}
