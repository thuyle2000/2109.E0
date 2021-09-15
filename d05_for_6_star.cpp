#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
	//demo cac vong for long nhau
	int n;
	printf(" vui long nhap so nguyen N: ");
	scanf("%d", &n);

	//hinh vuong ngoi sao
	for(int i=0; i<n; i++) {
		//i la bien dem so dong can in

		for(int j=0; j<n; j++) {
			//j la bien dem so ngoi sao duoc in ra tren 1 dong
			printf("* ");
		}

		printf("\n");
	}
	printf("\n");
	

	//hinh tam giac ngoi sao
	for(int i=0; i<n; i++) {
		//i la bien dem so dong can in

		for(int j=0; j<i+1; j++) {
			//j la bien dem so ngoi sao duoc in ra tren 1 dong
			printf("* ");
		}

		printf("\n");
	}
	printf("\n");


	//hinh tam giac ngoi sao nguoc
	for(int i=0; i<n; i++) {
		//i la bien dem so dong can in

		for(int j=0; j<n-i; j++) {
			//j la bien dem so ngoi sao duoc in ra tren 1 dong
			printf("* ");
		}

		printf("\n");
	}

}

/*
n = 5
in ra man hinh cac dong ngoi sao
* * * * *
* * * * *
* * * * *
* * * * *
* * * * *

*				dong 1, in 1 sao
* *			dong 2, in 2 sao
* * *			dong 3, in 3 sao
* * * *		dong 4, in 4 sao
* * * * *	dong n, in n sao

* * * * *	dong 1, in 5 sao	(5 = 5-0)
* * * *		dong 2, in 4 sao	(4 = 5-1)
* * *			dong 3, in 3 sao	(3 = 5-2)
* *			dong 4, in 2 sao	(2 = 5-3)
*				dong n, in 1 sao	(1 = 5-4)


*/
