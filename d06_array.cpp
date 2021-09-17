#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	//van dung cau truc mang, de luu cac diem thi (5 diem kq) cua 1 ban sv nao do
	int mark[5];
	// ben bo nho may tinh => mark[0], mark[1], mark[2], mark[3], mark[4]

	//su dung vong lap de nhap 5 cot diem kq thi trong mang
	for(int i=0; i<5; i++){
		printf("nhap diem thu %d: ", i+1); scanf("%d", &mark[i]);
	}
	
	//su dung vong lap de xuat bang diem
	for(int i=0; i<5; i++){
		printf(" >> diem thi thu %d : %d\n", i+1, mark[i]);
	}
	
	
}

