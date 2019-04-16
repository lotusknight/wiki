#include <stdio.h>

int main(){
		int num;
		int n,i,j,k;

		scanf("%d",&num);
		for(j=0,n=2*num-1;n>=1;j++,n-=2){
				k=j;
				while(k){
						printf(" ");
						k--;
				}
				for(i=0;i<n;i++){
//						for(j=i;j>0;j--)printf(" ");
						printf("#");
				}
				printf("\n");
}
		return 0;
}
