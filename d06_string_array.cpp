#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	//van dung mang 2 chieu de khai 1 mang co the luu tru 10 chuoi ky tu 
	//(moi chuoi co the luu tru toi da 79 ky tu)
	char ds[10][80];
	
	//nhap du lieu vo mang ds[][]
	for(int i=0; i<10; i++){
		printf(" nhap ho ten sv thu %d: ", i+1);
		gets(ds[i]);
	}
	
	//xuat danh sach ho ten sv
	printf("\n * danh sach ho ten sinh vien *\n");
	for(int i=0; i<10; i++){
		printf(" %2d. %s \n", i+1, ds[i]);
	}
}

