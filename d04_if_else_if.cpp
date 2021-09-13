#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	//demo if-else-if bac thang (ladder/staircase)
	//xep loai sinh vien dua vao diem thi.
	
	int diem;
	printf("Vui long nhap diem ket qua thi [0-100]: ");
	scanf("%d", &diem);
	
	if(diem<0 || diem>100){
		printf(">> Diem nhap khong hop le !!! ");
	}
	else if(diem>=80){
		printf(">> Loai A \n");
	}
	else if(diem>=65){
		printf(">> Loai B \n");
	}
	else if(diem>=50){
		printf(">> Loai C \n");
	}
	else{
		printf(">> Khong dat yeu cau. ");
	}
	
}

