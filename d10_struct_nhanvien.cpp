#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
demo cau truc nam trong cau truc:
viet chuong trinh quan ly nhan vien, bao gom cac thong tin : ma so, ten, ngay sinh va luong cb

*/


void Q2();
int main() {
	Q2();
}


//Buoc 1. Dinh nghia kieu cau truc NHANVIEN
struct DATE {
	int dd, mm, yy;
};


struct NHANVIEN {
	char ma_so[11];
	char ten[31];
	int luongCB;
	struct DATE ngaySinh;
};

typedef struct NHANVIEN NV;

void Q2() {
	// Buoc 2: nhap so luong nv muon quan ly
	int n;
	while(1) {
		printf(" vui long nhap so luong nhan vien muon quan ly [3-10]: ");
		scanf("%d", &n);
		if(n>=3 && n<=10) break;
	}


	// Buoc 3: khai bao mang [ds] co the chua n-nhan vien
	NV ds[n];


	// Buoc 4: dung vong lap de nhap du lieu chi tiet cho n-nhan vien
	for(int i=0; i<n; i++) {
		fflush(stdin);

		//nhap du lieu cho nhan vien duoc luu tai vi tri index i cua mang
		printf("  >> nhap nhan vien thu %d : \n", i+1);
		printf(" ma so: ");
		gets(ds[i].ma_so);
		
		printf(" ten nhan vien: ");
		gets(ds[i].ten);
		
		printf(" ngay sinh: \n");
		printf("  >> ngay [1-31]: "); scanf("%d", &ds[i].ngaySinh.dd);
		printf("  >> thang [1-12]: "); scanf("%d", &ds[i].ngaySinh.mm);
		printf("  >> nam: "); scanf("%d", &ds[i].ngaySinh.yy);
		
		printf(" luong cb: ");
		scanf("%d", &ds[i].luongCB);
	}

	// Buoc 5: in danh sach nhan vien
	printf("\n\n * * * Danh sach nhan vien * * * \n");
	for(int i=0; i<n; i++) {
		printf("%-10s ", ds[i].ma_so);
		printf("%-20s ", ds[i].ten);
		printf("%02d-%02d-%d ", ds[i].ngaySinh.dd, ds[i].ngaySinh.mm, ds[i].ngaySinh.yy);
		printf("%5d \n", ds[i].luongCB);
	}


}
