#include <stdio.h>

int main() 
{
    int list[5];
     printf("Hay nhap cac phan tu cua mang: \n");
    for (int i = 0; i < 5; i++) {
    	printf("Hay nhap phan tu thu %d cua mang: ", i + 1);
    	scanf("%d", &list[i]);
    }
    int max = list[0];
    int min = list[0];
    for (int i = 1; i < 5; i++) {
        if (list[i] > max) {
            max = list[i];
        }
        if (list[i] < min) {
            min = list[i];
        }
    }
    printf("Phan tu lon nhat cua mang la: %d\n", max);
    printf("Phan tu nho nhat cua mang la: %d\n", min);

    return 0;
}

