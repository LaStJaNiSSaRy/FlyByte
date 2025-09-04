#include<stdio.h>

int main(){

	main:

	int tesbih=50,misvak=40,seccade=300;
	int toplam, a,b,c,all;
	printf("Ne kadar bütçeniz var? : ");
	scanf("%d",&all);

	alma:

	printf("(Tesbih 50 , Misvak 40 , Seccade 300)\nNeyden ne kadar alacak sanız yukarıdaki sıraya göre yazınız:");
	scanf("%d %d %d",&a,&b,&c);
	toplam=a*tesbih + b*misvak + c*seccade;

	if(all==0){
        	printf("\nBütçeniz yok yada girmediniz birdaha dene.\n");
        	goto main;
	}

	else if(toplam==0){
		printf("\nSepet boş dönüşe birşey lazımdır birdaha bak.\n");
		goto alma;
	}
	else if(toplam>all)
	printf("\nBütçeniz (%d) üzerinde fiyat (%d).\n",all,toplam);

	else
	printf("\nBütçeniz (%d) yeterli. Toplam: %d\n",all,toplam);

}
