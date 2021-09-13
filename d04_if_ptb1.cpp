#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	//van dung cau truc if-else-if de giai phuong trinh bac 1: ax+b=0
	int a,b;
	printf(">> GIAI PHUONG TRINH BAC 1: ax+b=0 << \n");
	printf(" nhap he so a: "); scanf("%d", &a);
	printf(" nhap he so b: "); scanf("%d", &b);
	
	if(a != 0){
		printf(" Nghiem x = %f \n", -(float)b/a);
	}
	else if(b==0){
		printf(" PT co vo so nghiem !");
	}
	else{
		printf(" PT khong co nghiem !");
	}
	
}

