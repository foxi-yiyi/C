#include <stdio.h>

void swap( int *x, int *y ){
	int t;
	t  = *x; 
	*x = *y;  
	*y = t;                         
	
}

int main(){
	int a=5, b=3;
	
	printf( "a= %d; b= %d\n", a, b );
	swap(&a, &b);
	printf( "a= %d; b= %d\n", a, b );
	return 0;
} 
