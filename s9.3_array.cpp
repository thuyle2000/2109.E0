#include <stdio.h>

int main() {
	int n;

	do {
		printf(">> Nhap n (>3) = ");
		scanf("%d", &n);

		if(n>3) {
			break;	//n la nguyen > 0 => kt vong lap
		}
		printf(" n ko hop le, vui long nhap lai ! \n");

	} while(1);  // <=> while(true)

	int fibo[n];
	fibo[0] = fibo[1] = 1;
	
	printf("Day so Fibonacci co %d phan tu la:\n", n);
	for (int i = 2; i < n; i++) {
		fibo[i] = fibo[i-1] + fibo[i-2];
	}
	
	for(int i=0; i<n; i++){
		printf("%d ", fibo[i]);
	}
	
}
