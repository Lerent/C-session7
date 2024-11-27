#include <stdio.h>

int main() 
{
    int n;
    printf("Hay nhap so phan tu cua mang: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("So phan tu cua mang khong hop le\n");
        return 1;
    }
    int list[n];
    printf("Hay nhap cac phan tu cua mang: \n");
    for (int i = 0; i < n; i++) {
        printf("Hay nhap phan tu thu %d: ", i + 1);
        scanf("%d", &list[i]);
    }
    printf("Mang ban nhap la: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", list[i]);
    }
    printf("\n");

    return 0;
}

