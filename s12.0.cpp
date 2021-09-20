#include <stdio.h>

int main() {
    int n;
   
    printf(">> Moi nhap so phan tu cua mang: ");
    scanf("%d", &n);
    
    int a[n], b[n];
	 
    for (int i = 0; i < n; i++) {
        printf("Nhap a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    
    printf("Array before reverse:\t");
    for (int i = 0; i < n; i++) printf("%d ", a[i]);
    
    //assign a[] -> b[] in reverse order 
    for (int i = 0, j=n-1; i < n; i++, j--) {
        b[j] = a[i];
    }
    
    printf("\nArray after reverse:\t");
    for (int i = 0; i < n; i++) printf("%d ", b[i]);
}
