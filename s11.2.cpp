#include <stdio.h>
#include <string.h>

int main() {
	int count = 0;
	char text[100];
	printf(">> Moi nhap van ban:\n");
	gets(text);
	int n = strlen(text);

	//phuong phap 1
	for (int i = 0; i <n ; i++) {
		switch (text[i]) {
			case 'u':
			case 'e':
			case 'o':
			case 'a':
			case 'i':
			case 'U':
			case 'E':
			case 'O':
			case 'A':
			case 'I':
				count++;
				break;
			default:
				break;
		}
	}
	printf("\n Phuong phap 1: So nguyen am la %d \n", count);

	//phuong phap 2 (van dung ham strchr() )
	char vowels[] = "aeiouAEIOU";
	int count2 = 0;
	for(int i = 0; i<n; i++) {
		if(strchr(vowels, text[i])) {
			count2++;
		}
	}
	printf("\n Phuong phap 2: So nguyen am la %d", count2);
	



}
