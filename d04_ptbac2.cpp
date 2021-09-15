#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<math.h>

int main() {

	float a, b,c, delta ,x1,x2;
	printf(">> GIAI PHUONG TRINH BAC 2: ax2 + bx + c=0 <<\n");

	printf(" nhap he so a :");
	scanf("%f",&a);
	printf(" nhap he so b:");
	scanf("%f",&b);
	printf(" nhap he so c:");
	scanf("%f",&c);

	if(a==0) {
		//pt tro thanh pt bac 1
		if(b==0) {
			if(c==0) {
				printf("Phuong trinh co vo so nghiem");
			} else {
				printf("Phuong trinh vo nghiem ");
			}
		} else {
			printf("Phuong trinh co nghiem duy nhat x =%f",(-c/b));
		}
	} else {
		//tinh delta
		delta = b*b -4*a*c;

		printf("delta=%f\n",delta);

		if(delta>0) {
			x1 = (-b + sqrt(delta)) / (2*a);
			x2 = (-b - sqrt(delta)) / (2*a);
			printf("Phuong trinh co nghiem nhat x1=%f \n",x1);
			printf("Phuong trinh co nghiem hai x2=%f \n",x2);
		} else if (delta ==0) {
			x1= -b/(2*a);
			printf("Phuong trinh co nghiem kep x1 = x2 = %f \n ",x1);
		} else {
			printf("Phuong trinh vo nghiem!");
		}
	}
}





