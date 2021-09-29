#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//demo ghi file van ban
int main(){
	
	//khai bao bien chuoi [fileName] chua ten tap tin muon ghi du lieu
	char fileName[80]="F:\\Student\\2109-E0\\baitho.txt";
	
	//buoc 1: open file o che do ghi du lieu
	FILE *f = fopen(fileName, "w"); 
	
	//buoc 2: ghi 1 so dong cua bai tho nao do vo tap tin nay
	fputs("Tieng thu \n", f);
	fputs("Em khong nghe mua thu \n", f);
	fputs("duoi trang mo thon thu \n", f);
	fputs(" . . . \n\n", f);
	fputs("Em khong nghe rung thu \n", f);
	fputs("La thu roi xao xac \n", f);
	fputs("Con nai vang ngo ngac \n", f);
	fputs("dap tren la vang kho ? \n", f);
	fputs("\n\n", f);
	fputs(" Tac gia : Luu Trong Lu \n", f);
	
	//buoc 3: dong file
	fclose(f);
	
	printf("Da hoan tat luu file ! \n");
	
}


