#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void casio(int x, int y, int add, int sub, int product);
void casio2(int x, int y, int &add, int &sub, int &product);

int main() {
	int a,b, r1, r2, r3;

	printf("nhap 2 so nguyen a va b: ");
	scanf("%d %d", &a, &b);

	
	printf("\n Truyen gia tri :\n ");
	casio(a,b, r1, r2, r3);
	printf("tong = %d, hieu =%d, tich =%d \n", r1, r2, r3);

	printf("\n Truyen dia chi tham chieu :\n ");
	casio2(a,b, r1, r2, r3);
	printf("tong = %d, hieu =%d, tich =%d \n", r1, r2, r3);

}

void casio(int x, int y, int add, int sub, int product) {
	add = x+y;
	sub = x-y;
	product = x*y;
}

void casio2(int x, int y, int &add, int &sub, int &product) {
	add = x+y;
	sub = x-y;
	product = x*y;
}
