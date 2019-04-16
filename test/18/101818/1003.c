#include <stdio.h>

int main()
{
		int lines,i;
		long result[20];
		scanf("%d",&lines);
		for (i=1; i<=lines; i++){result[i-1]=sum(i);}
		for (i=0; i<lines; i++)
		{printf("Case %d:\n%ld\n",i,result[i]);
		 if(i!=lines-1)printf("\n");}
		return 0;
}

int sum(int n)
{
		long num,i,add,he;
		scanf("%ld",&num);
		for(i=0,he=0;i<num;i++){
				scanf("%ld",&add);
				he += add;
		};
		return he;
}
