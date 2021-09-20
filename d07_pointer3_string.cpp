#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

int main(){
	char s[80];
	char ch;
	
	printf("Nhap vao 1 chuoi ky tu: ");
	gets(s);
	
	printf("Nhap ky tu muon tim: ");
	ch = getche();
	
	//kiem tra ky tu vua nhap co trong chuoi s ko?
	char *p = strchr(s, ch);
	
	if(p==NULL){
		printf("\n >> Ko tim thay ky tu [%c] trong chuoi ! \n", ch);
	}
	else{
		printf("\n >> Tim thay ky tu [%c] trong chuoi tai vi tri [%d]! \n",ch, p-s);
	}
}

