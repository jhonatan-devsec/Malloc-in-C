#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *p = arr;
    
    printf("=== Array vs Puntero ===\n");
    printf("arr[0] = %d\n", arr[0]);    
    printf("*p     = %d\n", *p);  
    
    printf("\n=== Aritmética de Punteros ===\n");
    printf("p     = %p\n", (void *)p);
    printf("p + 1 = %p\n", (void *)(p + 1));
    printf("p + 2 = %p\n", (void *)(p + 2));
    
    printf("\n=== Acceso Equivalente ===\n");
    printf("arr[2]     = %d\n", arr[2]);   
    printf("*(arr + 2) = %d\n", *(arr + 2)); 
    printf("p[2]       = %d\n", p[2]);  
    printf("*(p + 2)   = %d\n", *(p + 2));
    
    return 0;
}