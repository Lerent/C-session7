#include <stdio.h>

int main() 
{
    int list[] = {1, 2, 3, 4, 5};
    int length = sizeof(list) / sizeof(list[0]);
    for (int i = 0; i < length; i = i + 1) {
        printf("%d ", list[i]);
    }
    printf("do dai cua mang la: %d\n", length);
    
    return 0;
}

