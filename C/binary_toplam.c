#include<stdio.h>

int main(){

	int a,i;
	int f=0;
	printf("Binary deki toplamını merak ettiğniz sayıyı girin: ");
	scanf("%d",&a);

	for (;a>0;){
		f+=a%2;
		a/=2;
		}

	printf("Binary de toplamı: %d\n",f);
}
