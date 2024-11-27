#include <stdio.h>

int main () 
{
	int list[5];
	printf("Hay nhap 5 phan tu: \n");
	for(int i = 0; i < 5; i = i + 1 ) {
		printf("Hay nhap phan tu thu %d: ", i + 1);
		scanf("%d", &list[i]);	
	}
	printf("Mang sau khi nhap la: ");
	for(int i = 0; i < 5; i++) {
		printf("%d ", list[i]);
	}
	printf("\n");
	
	return 0;
}
