#include<stdio.h>

int main(){
	int i,a,b,sonuc=1;
	printf("Aralarında asal mı? :");
	scanf("%d %d",&a,&b);

	for(i=2 ;i<= (a<b ? a : b) ; i++){
		if(a%i==0 && b%i==0)
		sonuc=0;
		if(sonuc==0)break;
	}
	sonuc==1 ?printf("Aralarında asal\n") : printf("Aralarında asal değiller\n");


}
