void main(){
	int x=4,y=3,z=1;

	(x*=z-y) ? y+=-z : (z+=-y-z+2  );

	printf(" %d %d %d ", x, y, z );
}
