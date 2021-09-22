#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int gPTBac2(int a, int b, int c, float &x1, float &x2);
int main() {
	
	float a, b,c, delta ,n1,n2;
	printf(">> GIAI PHUONG TRINH BAC 2: ax2 + bx + c=0 <<\n");

	printf(" nhap he so a:");
	scanf("%f",&a);
	printf(" nhap he so b:");
	scanf("%f",&b);
	printf(" nhap he so c:");
	scanf("%f",&c);


	int kq = gPTBac2(a, b, c, n1, n2) ;
	if(kq >0) {
		printf("Phuong trinh co nghiem nhat x1=%f \n",n1);
		printf("Phuong trinh co nghiem hai x2=%f \n",n2);
	} else if(kq==0) {
		printf("Phuong trinh co nghiem kep x1 = x2 = %f \n ",n1);
	} else {
		printf("Phuong trinh vo nghiem !");
	}
}

/*
	int gPTBac2(int a, int b, int c, float x1, float x2),
	return : -1: PT vo nghiem, 0: PT co nghiem kep, 1: PT co 2 nghiem
*/
int gPTBac2(int a, int b, int c, float &x1, float &x2) 
{

	float delta = b*b -4*a*c;

	printf(" delta = %f\n",delta);

	if(delta>0) {
		x1 = (-b + sqrt(delta)) / (2*a);
		x2 = (-b - sqrt(delta)) / (2*a);
		return 1;

	} else if (delta ==0) {
		x1=x2= -b/(2*a);
		return 0;
	} else {
		return -1;
	}

}



