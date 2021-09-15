#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
	//van dung vong lap while de nhap diem dung tu 0-100
	int lt=-1, th=-1;

	while(lt<0 || lt>100) {
		printf(" nhap diem ly thuyet [0-100]: ");
		scanf("%d", &lt);
	}

	while(th<0 || th>100) {
		printf(" nhap diem thuc hanh [0-100]: ");
		scanf("%d", &th);
	}


	printf(" >> diem binh quan: %.2f \n", (lt+th)/2.0);
}

