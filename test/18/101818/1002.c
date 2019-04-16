#include <stdio.h>

int main()
{
	int i,n=0;
	scanf("%d",&n);
	long long add=0;
	long long sum=0;

	while(i!=n)
	{
		i++;
		printf("Case %d:\n",i);
		scanf("%lld",&add);
		sum=add;
		printf("%lld",add);
		scanf("%lld",&add);
		sum+=add;
		printf(" + %lld",add);
		if(i!=n)
			{printf(" = %lld\n\n",sum);}
		else
			{printf(" = %lld\n",sum);};
	}
}
