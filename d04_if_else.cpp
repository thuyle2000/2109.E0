#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	//vi du demo ve if statement
	int n;
	
	printf("vui long nhap 1 so nguyen: ");
	scanf("%d", &n);
	
	if(n%2==0){
		printf(">> %d la so chan. \n", n);
	}
	else{
		printf(">> %d la so le. \n", n);
	}
	
	printf("Xin cam on ban da su dung chuong trinh !\n");
	
}

