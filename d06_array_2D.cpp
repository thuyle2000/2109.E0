#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	// demo mang 2 chieu : ma tran 3x3
	int a[3][3] = {1,2,3,4,5,6,7,8,9};
	int b[3][3] = { {10,20,30}, {40,50,60}, {70,80,90} };
	int c[3][3];
	
	//in ra mang a[][]
	printf("\n * Ma tran A[][] * \n");
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			printf(" %3d", a[i][j]);
		}
		printf("\n");
	}
	
	//in ra mang b[][]
	printf("\n * Ma tran B[][] * \n");
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			printf(" %3d", b[i][j]);
		}
		printf("\n");
	}
	
	//in ra mang c[][] = a[][]+b[][]
	printf("\n * Ma tran Tong C[][] * \n");
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			c[i][j] = a[i][j] + b[i][j];
			printf(" %3d", c[i][j]);
		}
		printf("\n");
	}
	
}

