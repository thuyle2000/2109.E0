#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	int a[]={12, 78, 55, 23};
	char c[] = {'1', 'h', 'A', 'x', '@'};
	double d[] = {1.34, 229.8765, 1.899};
	
	printf("Mang so nguyen a : \n");
	for(int i=0; i<4; i++){
		printf(" a[%d] = %d [%d]\n", i, a[i], &a[i]);
	}
	
	printf("Mang ky tu c : \n");
	for(int i=0; i<5; i++){
		printf(" c[%d] = %c [%d]\n", i, c[i], &c[i]);
	}
	
	printf("Mang so thuc (double) d : \n");
	for(int i=0; i<3; i++){
		printf(" d[%d] = %12.6f [%d]\n", i, d[i], &d[i]);
	}
			
	
	//ap dung phep toan tang/giam dia chi con tro
	printf("\n Ap dung phep toan tang dia chi cua con tro");
	printf("\n Mang so nguyen a : \n");
	for(int i=0; i<4; i++){
		printf(" a[%d] = %d [%d]\n", i, *(a+i) , (a+i) );
	}		
			
	printf("\n Ap dung phep toan giam dia chi cua con tro");
	printf("\n Mang so nguyen a : \n");
	int *p = a+4; // con tro p chi den phan tu cuoi cung cua mang a[]	
	for(int i=3; i>=0; i--){
		printf(" a[%d] = %d [%d]\n", i, *p , p-- );
	}
}

