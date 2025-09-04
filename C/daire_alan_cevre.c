#include<stdio.h>

int main(){

	float pi=3.14285714286;
	float r,alan;

	printf("Dairenin yarı çapını girin: ");
	scanf("%f",&r);

	alan = 2 * pi * r * r;

	printf("Dairenin alanı %f, çevesi %f\n",alan, alan/r);

}
