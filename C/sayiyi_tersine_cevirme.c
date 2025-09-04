#include<stdio.h>

int main(){

	int a,i;
	scanf("%d",&a);
	for(a;a>0;a/=10){

		printf("%d",a%10);

	}
}
