#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	char s[5][80]={"le thi ngoc huyen","nguyen phat tai","sar lavi",
	"tran huy phuoc", "nguyen toan"};
	
	printf("\n danh sach sinh vien: \n");
	for(int i=0; i<5; i++){
		printf(" %d. %s \n", i+1, s[i]);
	}
	
	char ten[80];
	printf("\n nhap ten sinh vien muon tim: ");
	gets(ten);
	
	int cnt=0;
	for(int i=0; i<5; i++){
		if(strstr(s[i], ten)){
			printf(" %s \n", s[i]);
			cnt++;
		}
	}
	
	if(cnt==0){
		printf(" >> Ko tim thay !!! \n");
	}
	else{
		printf(" >> Tim thay %d sinh vien co ten [%s] \n", cnt, ten);
	}
	
}

