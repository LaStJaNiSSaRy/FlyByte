#include<stdio.h>

int main (){

	float a,b,c,ort;
	printf("Sırası ile 1.Sınav 2.Sınav ve Sözlü puanınızı girin: ");
	scanf("%f %f %f",&a,&b,&c);
	ort=(a+b+c)/3;
	if(ort>85)
	printf("Ortalamanız %f Takdir aldınız.\n",ort);
	else if(ort>75)
	printf("Ortalamanız %f Teşekkür aldınız.\n",ort);
	else if(ort<50)
	printf("Kardeş ortalaman %f bence eve dönme.\n",ort);
 	else
	printf("Ortalamanız %f\n",ort);


}
