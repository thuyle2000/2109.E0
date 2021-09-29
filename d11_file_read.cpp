#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//demo doc file van ban
int main(){
	//khai bao bien chuoi [fileName] chua ten tap tin muon doc du lieu
	char fileName[80]="F:\\Student\\2109-E0\\baitho.txt";
	
	//buoc 1: open file o che do doc du lieu vo chuong trinh
	FILE *f = fopen(fileName, "r");
	
	//buoc 2: doc het cac dong trong tap tin 
	char line[81];
	while( !feof(f) ){
		fgets(line, 80, f);
		printf("%s", line);		
	}
	
	//buoc 3: dong file
	fclose(f);
	
}


