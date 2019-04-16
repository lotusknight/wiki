#include <stdio.h>

int main(){
		double i;
		for (i = 0; i !=10.0; i+= 0.1)
				{
						printf("%.1f\n", i);
						if (i>12)break;
				}
		return 0;
}

