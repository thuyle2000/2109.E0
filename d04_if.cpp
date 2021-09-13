#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	//vi du demo ve if statement
	int n;
	
	printf("vui long nhap 1 so nguyen: ");
	scanf("%d", &n);
	int r = n%2; //r chua phan du cua phep chia n cho 2
	
	if(r==0){
		printf(">> %d la so chan. \n", n);
	}
	
	printf("Xin cam on ban da su dung chuong trinh !\n");
	
}

