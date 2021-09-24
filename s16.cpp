#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

void S16_1();
void S16_2();


int main(){
	char op;
	
	//menu cho chuong trinh de thuc hien 2 ham S16_1, S16_2
	while(1){
		printf("\n\n >> MENU <<\n");
		printf("1. bai tap 1 \n");
		printf("2. bai tap 2 \n");

		printf("3. Thoat khoi ung dung  \n");
		printf("  Nhap ma so chuc nang cong viec : ");
		
		op = getche();
		
		switch(op){
			case '1': S16_1(); break;
			case '2': S16_2(); break;
			case '3': return 0;
			
			default:
				printf("\n >> Chon sai ma so chuc nang. Vui long chon lai ! \n ");
				break;
			
		}		
	}	
	
}


void S16_1(){
	printf("\n\n * Assignment S16_1, page 276 * \n");
	float r;
	
	printf("nhap ban kinh hinh tron : ");
	scanf("%f", &r);
	
	float dt = 3.14 * r * r;
	float cv = 2 * 3.14 * r;
	
	printf(" >> Dien tich cua hinh tron: %.2f \n", dt);
	printf(" >> Chu vi cua hinh tron: %.2f \n", cv);
}


void S16_2(){
	printf("\n\n * Assignment S16_2, page 276 * \n");
	
	int n;
	while(1){
		printf(" nhap 1 so nguyen duong (>=0) : ");
		scanf("%d", &n);
		if(n>=0) break;
	}
	
	long kq = 1 ;
	for(int i=1; i<=n; i++){
		kq = kq * i;
	}
	
	printf(" >> Giai thua cua %d = %d \n", n, kq);
	
}


