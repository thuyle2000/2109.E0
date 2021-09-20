#include <stdio.h>

int main() {
	int n;

	do {
		printf(">> Nhap n (>0) = ");
		scanf("%d", &n);

		if(n>0) {
			break;	//n la nguyen > 0 => kt vong lap
		}
		printf(" n ko hop le, vui long nhap lai ! \n");

	} while(1);  // <=> while(true)

	int f = 1, f0 = 0, f1 = 1;

	printf("Day so Fibonacci co %d phan tu la:\n", n);
	for (int i = 0; i < n; i++) {
		printf("%d ", f);
		f = f0 + f1;
		f0 = f1;
		f1 = f;
	}
	
	
	
}
