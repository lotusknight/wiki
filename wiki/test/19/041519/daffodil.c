#include <stdio.h>

bool check(int i, int j, int k);

int main(){
		for(int i=1;i<10;i++)
				for(int j=0;j<10;j++)
						for(int k=0;k<10;k++){
								check(i,j,k);
							//	printf("%d%d%d\n",i,j,k);
						}

		return 0;
}

bool check(int i,int j,int k){
		int num1 = i*100 + j*10 + k;
		int num2 = i*i*i + j*j*j + k*k*k;
//		printf("%d,%d\n",num1,num2);
		if(num1 == num2) printf("%d\n",num1);
		return num1 == num2;
}
