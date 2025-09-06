#include<stdio.h>

int main(){
	long long b=1;
	long long a=0;
	int c=0;
	int n;
	int dizi[50];

	scanf("%d",&c);
	for(n=0;n<50;n++){

		
		b=a+b;//1 2 3
		a=b-a;//1 1 2
		dizi[n]=a;

	}
	printf("%d\n",dizi[c-1]);

}
