#include <stdio.h>
#include <string.h>

int main() {
	int countV=0, countC=0;
	
	char word[100];
	printf(">> Moi nhap mot tu: ");
	scanf("%s", word);
	for (int i = 0; i < strlen(word); i++) {
		if( (word[i]>='a' && word[i]<='z') || (word[i]>='A' && word[i]<='Z') ) {
			switch (word[i]) {
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
					countV++;
					break;
					
				default:
					countC++;
					break;
			}
		}

	}
	printf("So nguyen am la %d\n", countV);
	printf("So phu am la %d", countC);
}
