#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(){
	// ap dung break de kiem tra mat ma nhap dung hay sai 
	// (duoc phep nhap toi da 5 lan )

   time_t t;
    
   /* Khoi tao bo sinh so ngau nhien */
	//	srand((unsigned) time(&t));

	int passCode = 10 + rand() % 20;  // tao 1 so ngau nhien tu 10 - 30
	
	printf("passcode : %d \n", passCode);
	
	int password;
	
	int i;
	for(i=0; i<5; i++){
		printf(" >> vui long nhap mat ma [10-30]: ");
		scanf("%d", &password);
		
		if(passCode == password){
			break;	//mat ma nhap dung => thoat vong lap
		}
	}
	
	if(i==5){
		printf(" ==> Mat Ma ko hop le. Tai khoan se bi khoa !\n");
		printf(" (passcode is %d ) \n", passCode);
	}
	else{
		printf(" Chuc mung ban da dang nhap thanh cong !\n");
	}
	
}

