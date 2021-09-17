#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	//van dung mang 2 chieu de khai 1 mang co the luu tru n chuoi ky tu 
	//(moi chuoi co the luu tru toi da 79 ky tu)
	int n;
	printf(" nhap tong so sv: ");
	scanf("%d", &n);
	fflush(stdin);
	
	char ds[n][80];
	
	//nhap du lieu vo mang ds[][]
	for(int i=0; i<n; i++){
		printf(" nhap ho ten sv thu %d: ", i+1);
		gets(ds[i]);
	}
	
	//xuat danh sach ho ten sv
	printf("\n * danh sach ho ten sinh vien *\n");
	for(int i=0; i<n; i++){
		printf(" %2d. %s \n", i+1, ds[i]);
	}
	
	//sap xep lai danh sach ten sinh vien theo thu tu alphabeta
	char temp[80];
	for(int i=0; i<n-1; i++){
		for(int k=i+1; k <n ; k++){
			//so sanh 2 chuoi ho ten tai vi tri i va k
			if(strcmp(ds[i], ds[k]) > 0){
				strcpy(temp, ds[i]);
				strcpy(ds[i], ds[k]);
				strcpy(ds[k], temp);
			}
		}
	}
	
	//xuat lai danh sach ho ten sv sau khi duoc xep thu tu
	printf("\n * danh sach ho ten sinh vien [a-z] *\n");
	for(int i=0; i<n; i++){
		printf(" %2d. %s \n", i+1, ds[i]);
	}	
	
}

