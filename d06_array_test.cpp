#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	int a[5]={1,2,3,4,5};
	int b[5]={1,2,3,4,5};
	int c[5];
	
	if(a==b){
		printf("mang a[] giong mang b[]");
	}
	else{
		printf("mang a[] khac mang b[] \n");
	}
	
	// c = a ;  // loi bien dich - phai thay the bang vong lap ben duoi
	for(int i=0; i<5; i++){
		c[i] = a[i];
	}
	
	//in mang c ra
	for(int i=0; i<5; i++){
		printf("%d ", c[i]);
	}
	
	char ascii[10];
	for(int i=0, code=65; i<8; i++, code++){
		ascii[i] = code;
	}
	printf("\n * bang ma ascii cua %d ky tu dau tien * \n", 10);
	for(int i=0; i<10; i++){
		printf("%2d. '%c' - %d \n", i, ascii[i], ascii[i]);
	}
	
}

