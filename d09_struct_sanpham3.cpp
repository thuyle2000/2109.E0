#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
viet chuong trinh quan ly danh sach cac san pham.
Moi san pham bao gom cac thuoc tinh: ma so, ten, don gia, xuat xu
	1. them san pham
	2. in ra danh sach san pham
	3. in ra 2 san pham co don gia cao nhat
*/


//Buoc 1. Dinh nghia kieu cau truc SANPHAM
struct SANPHAM {
	char ma_so[11];
	char ten[31];
	int don_gia;
	char xuat_xu[5];
};


int main() {

	// Buoc 2: nhap so luong sp muon quan ly
	int n;
	while(1) {
		printf(" vui long nhap so luong san pham muon quan ly [3-100]: ");
		scanf("%d", &n);
		if(n>=3 && n<=100) break;
	}


	// Buoc 3: khai bao mang [ds] co the chua n-san pham
	struct SANPHAM ds[n];


	// Buoc 4: dung vong lap de nhap du lieu chi tiet cho n-san pham
	for(int i=0; i<n; i++) {
		fflush(stdin);

		//nhap du lieu cho san pham duoc luu tai vi tri index i cua mang
		printf("  >> nhap san pham thu %d : \n", i+1);
		printf(" ma so: ");
		gets(ds[i].ma_so);
		printf(" ten san pham: ");
		gets(ds[i].ten);
		printf(" xuat su: ");
		gets(ds[i].xuat_xu);
		printf(" don gia: ");
		scanf("%d", &ds[i].don_gia);
	}


	// Buoc 5: in danh sach san pham
	printf("\n\n * * * Danh sach san pham * * * \n");
	for(int i=0; i<n; i++) {
		printf("%-10s ", ds[i].ma_so);
		printf("%-20s ", ds[i].ten);
		printf("%6d ", ds[i].don_gia);
		printf("%s \n", ds[i].xuat_xu);
	}


	// Buoc 6: in 2san pham co don gia cao nhat 
	
	// Buoc 6a: sap xep lai ds theo thu tu giam dan cua cot don gia
	struct SANPHAM temp;
	for(int i=0; i<n-1; i++){
		for(int k=i+1; k<n; k++){
			if(ds[i].don_gia < ds[k].don_gia){
				temp = ds[i];
				ds[i] = ds[k];
				ds[k] = temp;
			}
		}
	}

	// Buoc 6b: in ra 2 san pham co don gia cao nhat
	printf("\n\n * * * 2 san pham co don gia cao nhat * * * \n");
	for(int i=0; i<2; i++) {
		printf("%-10s ", ds[i].ma_so);
		printf("%-20s ", ds[i].ten);
		printf("%6d ", ds[i].don_gia);
		printf("%s \n", ds[i].xuat_xu);
	}
}

