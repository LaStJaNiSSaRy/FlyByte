#include<stdio.h>

int main(){
	int b=1;
	int a=0;
	int n;

	scanf("%d",&n);
	printf("%d\n",b);
	for(;n>1;n--){

		b=a+b;
		a=b-a;	
		printf("%d\n",b);

	}

}





