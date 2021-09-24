#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

void S16_1();
void S16_2();
void s13_3();

int main(){
	char op;
	
	//menu cho chuong trinh de thuc hien 3 ham S16_1, S16_2, S13_3
	while(1){
		printf("\n\n >> MENU <<\n");
		printf("1. bai tap 1 \n");
		printf("2. bai tap 2 \n");
		printf("3. bai tap 3 \n");
		printf("4. Thoat khoi ung dung  \n");
		printf("  Nhap ma so chuc nang cong viec : ");
		
		op = getche();
		
		switch(op){
			case '1': S16_1(); break;
			case '2': S16_2(); break;
			case '3': s13_3(); break;
			case '4': return;
		}
		
	}
	
	
	
}


void S16_1(){
	printf("Assignment S16_1, page 123 \n");
}
void S16_2(){
	printf("Assignment S16_2, page 124 \n");
}
void s13_3(){
	printf("Assignment s13_3, page 125 \n");
}
