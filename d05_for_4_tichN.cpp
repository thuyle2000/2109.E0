#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
	/*
	van dung vong lap for de tinh tich cua n-so nguyen dau tien (giai thua cua n)
	vi du:
	- neu n = 10 => 1*2*3*4* .. *10
	- neu n = 20 => 1*2*3*4* .. *20
	*/

	int n;
	printf(" vui long nhap 1 so nguyen > 0: ");
	scanf("%d", &n);
	
	int sum = 1;
	for (int i = 1; i <= n; i++) 
		sum*=i;

	printf(" Tich %d-so nguyen dau tien la %d", n, sum);
}

