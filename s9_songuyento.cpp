#include <stdio.h>
#include <math.h>

int main() {
	int n, checkSNT = 1;

	while(1) {
		printf("Nhap so n (> 1) : ");
		scanf("%d", &n);
		if(n > 1) break;
	}


	for (int i = 2; i <= sqrt(n); i++) {
		if (n%i == 0) {
			checkSNT = 0;
			break;
		}
	}

	if (checkSNT)
		printf("Day la SNT");
	else
		printf("\n %d la hop so. \n", n);

}
