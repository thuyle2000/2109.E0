#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	// van dung toan tu dau phay (comma operator) trong vong lap FOR
	int n;
	printf("vui nhap long 1 so nguyen:  ");
	scanf("%d", &n);
	
	// int a, k;
	for(int a=1, k=n; i<=n; a++,k-- ){
		printf("%d + %d = %d \n", a , k, a+k);
	}
	
	/*
	vi du n = 5
	=> ket qua man hinh
	 	1 + 5 = 6
	 	2 + 4 = 6
	 	3 + 3 = 6
	 	4 + 2 = 6
	 	5 + 1 = 6	
	*/
	
}

