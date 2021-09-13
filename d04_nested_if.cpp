#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	/*
		van dung cau truc nested if de kiem tra nam nhuan. 
		nam nhuan la nam chia het cho 4.
		voi nhung nam the ky (chia het 100), phai chia het 400 moi la
		nam nhuan	
	*/
	
	int year;
	printf("nhap nam muon kiem tra: ");
	scanf("%d", &year);
	
	if(year % 400==0){
		printf(" >> %d la nam nhuan the ky ! \n", year );
	}
	else{
		if(year % 100==0){
			printf(" >> %d la nam the ky ! \n", year );
		}
		else if(year %4 == 0){
			printf(" >> %d la nam nhuan ! \n", year );
		}
		else{
			printf(" >> %d la nam binh thuong ! \n", year );
		}
	}
}

