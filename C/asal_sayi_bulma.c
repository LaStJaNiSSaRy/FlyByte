#include<stdio.h>

int main(){

	int gir,i,f;
	int sonuc=1;

	printf("Kaç asal sayı bulmak isiyorsanız yazın: ");
	scanf("%d",&gir);

	for(i=2;gir>0;i++){

		for(f=2;f<i;f++){
			if(i%f==0){
			sonuc=0;
			break;}

			else if(f==i-1){
				sonuc=1;
		
			}
		}
	if (sonuc==1){printf("%d\n",i);gir--;}

}


}
