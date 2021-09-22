#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void sum_odd();	//khai bao prototype ham sum_odd()
int main() {
	sum_odd();
}


//tinh tong cac so le giua 2 so nguyen n1 va n2
void sum_odd() {
	int n1, n2;

	printf("vui long nhap so nguyen thu 1: ");
	scanf("%d", &n1);

	printf("vui long nhap so nguyen thu 2: ");
	scanf("%d", &n2);

	int start=n1, stop=n2;
	if(n1>n2) {
		start = n2;
		stop = n1;
	}

	//start se la so le dau tien
	if(start%2==0) {
		start++;
	}

	int total = 0;
	for(int i=start; i<=stop; i+=2) {
		printf("% d ", i);
		total = total + i ;
	}

	printf("\n Tong cac so le giua %d va %d = %d \n", n1, n2, total);

};
