#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	
	//van dung cau truc mang, de luu cac diem thi (5 diem kq) cua 1 ban sv nao do
	//version 2: tinh va in ra diem cao nhat, thap nhat va binh quan
	
	int mark[5];
	// ben bo nho may tinh => mark[0], mark[1], mark[2], mark[3], mark[4]

	//su dung vong lap de nhap 5 cot diem kq thi trong mang
	for(int i=0; i<5; i++){
		printf("nhap diem thu %d: ", i+1); scanf("%d", &mark[i]);
	}
	
	
	
	int sum = 0;  //sum = mark[0]+ mark[1]+ mark[2]+mark[3]+mark[4]
	int max = mark[0];
	int min = mark[0];
	
	//su dung vong lap de xuat bang diem
	printf("\n * Bang diem ket qua *\n");
	
	for(int i=0; i<5; i++){
		printf(" >> diem thi thu %d : %d\n", i+1, mark[i]);
		
		max = max>mark[i]?max:mark[i];
		min = min<mark[i]?min:mark[i];
		sum += mark[i];
	}
	
	//in ra diem cao nhat, thap nhat va binh quan
	printf("\n * * * * * \n");
	printf(" diem cao nhat : %d \n", max);
	printf(" diem thap nhat : %d \n", min);
	printf(" diem binh quan : %.2f \n", sum/5.0);
	
}

