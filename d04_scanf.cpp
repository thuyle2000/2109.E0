#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	int tuoi;
	float luongCB;
	char tenNV[60]; // chuoi ky tu chua ten NV, co do dai toi da 59
	
	//nhap tuoi nhan vien
	printf("Nhap thong tin nhan vien: \n");
	printf(" - tuoi: ");
	scanf("%d", &tuoi);
	
	//nhap luong cb nhan vien
	printf(" - luong cb: ");
	scanf("%f", &luongCB);
	
	fflush(stdin);	//clear keyboard buffer
	
	//nhap luong ten nhan vien
	printf(" - ho va ten: ");
	scanf("%[^\n]s", tenNV);	
	
	//xuat thong tin nhan vien ra man hinh
	printf("\n == Thong tin nhan vien == \n");
	printf(" ho ten: %s \n", tenNV);
	printf(" tuoi: %d \n", tuoi);
	printf(" luong cb: %.2f \n", luongCB);
}

