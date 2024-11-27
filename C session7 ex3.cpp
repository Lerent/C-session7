#include <stdio.h>

int main ()
{
	int list[5];
	int score = 0;
	printf("Hay nhap 5 phan tu bat ki: \n");
	for(int i = 0; i < 5; i++) {
		printf("Hay nhap phan tu thu %d: ", i + 1);
		scanf("%d", &list[i]);
	}
	printf("So chan co trong mang la: ");
	for(int i = 0; i < 5; i++) {
		if (list[i] % 2 == 0) {
			printf("%d ", list[i]);
			score = 1;
		} if (score != 1) {
			printf("Khong co so chan nao trong mang");
		}
	}
	
	return 0;
}
