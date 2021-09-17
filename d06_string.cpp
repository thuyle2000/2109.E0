#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

int main(){
	//demo ve chuoi ky tu
	
	char fullname[81]; // chuoi nay co the chua duoc toi da 80 ky tu
	char fullname2[81];
	char fullname3[81];
	
	char s[100] = "Hello, ";
	
	
	printf("nhap ho ten : ");
	gets(fullname);
	
	printf("Ho ten : %s \n", fullname);
	printf("Tong so ky tu : %d \n", strlen(fullname));
	
	//gan noi dung chuoi fullname -> fullname2
	strcpy(fullname2, fullname);
	printf("\nHo ten (copy version) : %s \n", fullname2);
	
	//noi chuoi fullname vo cuoi chuoi s
	strcat(s, fullname);
	printf("%s \n\n", s);
	
	
	//so sanh 2 chuoi ky tu
	printf("nhap ho ten sv thu 2: ");
	gets(fullname3);
	
	printf("\n *So sanh ho ten sv thu 1 va sv thu 2 : ");
	printf("%d \n", strcmp(fullname, fullname3));
	
	printf("\n *So sanh ho ten sv thu 2 va sv thu 1 : ");
	printf("%d \n", strcmp(fullname3, fullname));	
	
	printf("\n *So sanh ho ten sv thu 1 va sv - version copy : ");
	printf("%d \n\n", strcmp(fullname, fullname2));
	
	//tim kiem 1 ky tu trong chuoi
	char ch;
	printf("nhap vao 1 ky tu bat ky: "); 
	ch =getche();
	if(strchr(fullname, ch)){
		printf("\n Tim thay ky tu [%c] trong chuoi [%s] \n", ch, fullname);
	}
	else{
		printf("\n KO Tim thay ky tu [%c] trong chuoi [%s] \n", ch, fullname);
	}
	
	
	//tim kiem 1 chuoi trong chuoi khac
	if(strstr(fullname, fullname3)){
		printf("\n Tim thay chuoi [%s] trong chuoi [%s] \n", fullname3, fullname);
	}
	else{
		printf("\n KO TIM THAY chuoi [%s] trong chuoi [%s] \n", fullname3, fullname);
	}
	
}



