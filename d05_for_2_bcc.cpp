#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	//van dung vong lap for de in ra bang cuu chuong N
	
	int n;
	printf(" vui long nhap 1 so nguyen: ");
	scanf("%d", &n);
	
	printf(">> Bang Cuu Chuong %d << \n", n);
	
	for(int i=1; i<=10; i++){
		printf(" %2d * %2d = %3d \n", n, i, n*i); 
	}
	
}

