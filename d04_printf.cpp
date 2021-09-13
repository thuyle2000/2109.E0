#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
	int x=100, y=2000, z=1234567890;
	char n1[]="Nguyen Phuc Duy", n2[]="La Bich Tram";
	printf("x= [%d] \n", x);
	printf("y= [%d] \n", y);
	printf("z= [%d] \n", z);
	printf("n1 = [%s] \n", n1);
	printf("n2 = [%s] \n", n2);

	printf("\n Su dung cac modifier -, do rong cot: \n");
	printf("x= [%8d] \n", x);
	printf("y= [%8d] \n", y);
	printf("x= [%08d] \n", x);
	printf("y= [%08d] \n", y);
	
	printf("z= [%8d] \n", z);
	printf("n1 = [%-30s] \n", n1);
	printf("n2 = [%-30s] \n", n2);

	float f1=12.345678, f2=123.89087;
	printf("\n Su dung precision modifier \n");
	printf("f1= [%f], f2=[%f] \n", f1, f2);
	printf("f1= [%.2f], f2=[%.3f] \n", f1, f2);
	printf("n1 = [%.10s] \n", n1);
	
	
}


