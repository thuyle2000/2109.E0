#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
	int n = 10;
	int a[n] = {34, 8, 78, 12, 6, 90, 22, 10, 9, 43};

	printf("\n Day so truoc khi xep thu tu: \n");
	for(int i=0; i<n ; i++) {
		printf("%3d ", a[i]);
	}
	printf("\n");

	//sap xep day so theo thu tu tang dan
	int temp ;
	for(int i = 0; i< n-1; i++) {
		for(int k=i+1; k<n ; k++) {
			if(a[i]>a[k]) {
				temp = a[i];
				a[i] = a[k];
				a[k] = temp;
			}
		}
	}

	printf("\n Day so sau khi xep thu tu: \n");
	for(int i=0; i<n ; i++) {
		printf("%3d ", a[i]);
	}
	printf("\n");

}

