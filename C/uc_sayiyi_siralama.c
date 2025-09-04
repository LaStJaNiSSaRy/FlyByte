#include<stdio.h>

int main(){

	int x,y,z;

	printf("3 sayı giriniz : ");
	scanf("%d %d %d",&x,&y,&z);

	if(x>=y && x>=z){
	printf("%d > %d > %d\n",x, y > z ? y, z : z, y);
	}

	else if(y>=x && y>=z){
	printf("%d > %d > %d\n",y, x > z ? x, z : z, x);
	}

	else if(z>=y && z>=x){
	printf("%d > %d > %d\n",z, x > y ? x, y : y, x);
	}
	else{
	printf("hata\n");
	}

return 0;
}
