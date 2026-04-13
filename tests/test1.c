#include <stdio.h>
#include "../include/my_malloc.h"

int main() {
    printf("=== Test 1: Mi primer malloc ===\n");
    
    int *num = my_malloc(sizeof(int));
    
    if (num != NULL) {
        *num = 42;
        printf("Valor guardado: %d\n", *num);
        printf("Dirección: %p\n", (void *)num);
    }

    int *arr = my_malloc(5 * sizeof(int));
    
    if (arr != NULL) {
        for (int i = 0; i < 5; i++) {
            arr[i] = i * 10;
        }
        
        printf("Array: ");
        for (int i = 0; i < 5; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
    
    my_free(num);
    my_free(arr);
    
    return 0;
}