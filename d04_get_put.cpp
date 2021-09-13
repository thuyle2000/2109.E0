#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

int main(){
	printf("Demo putchar(), getchar() \n");
	
	char ch;
	printf("Vui long nhap 1 ky tu (y/n): ");
//	ch = getchar(); // cho nhap 1 ky tu, ket thuc lenh bang <enter> 
						 // vi du: nhap "12345", enter => lenh hoan tat
						 // luu '1' => vo bien ch, 
						 // con chuoi "2345" van o trong keyboard buffer
						 
	ch = getche();  // cho nhap 1 ky tu
	
	fflush(stdin); // xoa bo dem ban phim.
	
	printf("\n Ky tu vua nhap la: ");
	putchar(ch);
	
	char tenSV[31]; // chuoi ky tu, co the chua toi da 30 kytu.
	printf("\n Nhap ten sinh vien: ");
	gets(tenSV);
	printf("\n Ten cua sinh vien vua nhap: ");
	puts(tenSV);
}


