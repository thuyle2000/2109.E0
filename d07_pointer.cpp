#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
	int i = 100, j=200;
	char s[]= "Hello, Phat Tai !";
	float f = 98.99;

	//khai bao con tro pi, pj chua dia chi cua bien i va j
	int *pi = &i;
	int *pj = &j;

	//khai bao con tro pf chua dia chi bien f
	float *pf = &f;


	//in gia tri cua cac bien i, j va f
	printf("i = %d, j = %d, f = %.2f \n", i,j, f);

	//in dia chi cua cac bien i, j va f
	printf(">> Dia chi bien i: %d - %X \n", pi, pi);
	printf(">> Dia chi bien j: %d - %X \n", pj, pj);
	printf(">> Dia chi bien f: %d - %X \n", pf, pf);

	//in dia chi cua cac bien s
	printf(">> Dia chi bien s: %d - %X \n", s, s);
	
	//gan cho i gia tri moi 500
	*pi = 500;
	//gan cho j gia tri moi = i*2+j
	*pj = i*2+j;
	
	//in gia tri cua cac bien i, j sau khi thay doi
	printf("i = %d, j = %d \n", i, j);
}
