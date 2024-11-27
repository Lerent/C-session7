#include <stdio.h>

int main() 
{
    int list[5];
    printf("Hay nhap 5 phan tu bat ki: \n");
	for(int i = 0; i < 5; i++) {
		printf("Hay nhap phan tu thu %d: ", i + 1);
		scanf("%d", &list[i]);
	}
    for (int i = 0; i < 5; i++) {
        if (list[i] % 2 == 0) {
            list[i] += 3;
        } else {
            list[i] += 2;
        }
    }
    printf("Mang la: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", list[i]);
    }

    return 0;
}

