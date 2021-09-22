#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void factorial(int n);
long factorial_2(int n);

int main(){
	
	int n;
	printf(">> nhap so nguyen N: ");
	scanf("%d", &n);
	
	factorial(n);
	
	long r = factorial_2(n);
	
	printf("\n *** trong ham main() *** \n");
	printf(">> %d! = %d \n", n, r);
}


/*
   n! = 1*2*3*4* ... *n
   
   0! = 1
   5! = 1*2*3*4*5 = 120
   8! = 1*2*3*4*5*6*7*8 = ...
*/

//cach 1: ham tinh giai thua ko co gia tri tra ve
void factorial(int n)
{
	long sum = 1;

	for(int i=1; i<=n; i++){
		sum = sum*i;
	}
	
	printf("\n *** trong ham factorial() *** \n");
	printf(" >> %d! = %ld \n ", n, sum);
}


//cach 2: ham tinh gia thua co gia tri tra ve
long factorial_2(int n)
{
	long sum = 1;

	for(int i=1; i<=n; i++){
		sum = sum*i;
	}
	
	return sum;
}
