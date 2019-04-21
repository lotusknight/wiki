#include <stdio.h>
#include <time.h>
#include <math.h>
int main(){
		int num;
		int i,j;
		clock_t start,end;
		scanf("%d",&num);
		printf("#####2 ways to compute the number of prime number#####\n");
		printf("CLOCKS_PER_SEC=%ld\n",CLOCKS_PER_SEC);
		start = clock();
		for(i=2;i<num;i++){
				for(j=2;j<=sqrt(i);j++){
//				for(j=2;j<=i/j;j++){
					if(i%j==0)break;
					if(j<(int(sqrt(i))))continue; //enforce the transformation
//					if(j<i/j)continue; // i think this is faster?
//					printf("%d ",i);
//					printf("%d/%d ",i,j);
				}
//				if(i%j!=0)printf("\n");
		}
		end = clock();
		printf("sqrt.cost= %.2lf s\n",(double(end-start))/CLOCKS_PER_SEC);
		printf("sqrt.cost= %ld clicks\n",end-start);
		
		start = clock();
		for(i=2;i<num;i++){
//				for(j=2;j<=sqrt(i);j++){
				for(j=2;j<=i/j;j++){
					if(i%j==0)break;
//					if(j<(int(sqrt(i))))continue; //enforce the transformation
					if(j<i/j)continue; // i think this is faster?
//					printf("%d ",i);
//					printf("%d/%d ",i,j);
				}
//				if(i%j!=0)printf("\n");
		}
		end = clock();
		printf("div.cost= %.2lf s\n",(double(end-start))/CLOCKS_PER_SEC);
		printf("div.cost= %ld clicks\n",end-start);
		
		return 0;
}
