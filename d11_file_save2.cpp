#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//demo doc file van ban - version 2
int main(){
	//khai bao bien chuoi [fileName] chua ten tap tin muon doc du lieu
	char fileName[80]="F:\\Student\\2109-E0\\baitho.txt";
	
	//buoc 1: open file o che do doc du lieu vo chuong trinh
	FILE *f = fopen(fileName, "r");
	
	//tinh kich thuoc cua tap tin lu vo bien [size]
	fseek(f,0,2);
	long size = ftell(f);
	
	//di chuyen curp ve lai dau file
	fseek(f,0,0);
	
	
	//buoc 2: doc het cac dong trong tap tin 
	char line[81];
	while(ftell(f)< size ){
		fgets(line, 80, f);
		printf("%s", line);			
	}
	
	//buoc 3: dong file
	fclose(f);
	
}


