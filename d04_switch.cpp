#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
	/*van dung cau truc switch-case de kiem tra 1 ky tu la nguyen am hay phu am */
	char ch;

	printf(" vui long nhap 1 ky tu chu thuong bat ky [a-z]: ");
	scanf("%c", &ch);

	if(ch>='a' && ch<='z') {
		switch(ch) {
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
				printf(" %c la nguyen am ! \n ",ch);
				break;
			case 'z':
				printf(" %c la ky tu cuoi cung trong bang chu cai alphabet \n", ch);
				break;
			default:
				printf(" %c  la phu am ! \n ",ch);	
				break;	
		}
	} else {
		printf("Ky tu nhap ko hop le !");
	}
}

