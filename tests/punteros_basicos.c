#include <stdio.h>

int main() {
    int x = 42;     
    int *p = &x;  
    
    printf("=== Valores ===\n");
    printf("Valor de x:     %d\n", x);   
    printf("Valor de p:     %p\n", (void *)p); 
    
    printf("\n=== Direcciones ===\n");
    printf("Dirección de x: %p\n", (void *)&x);
    printf("Dirección de p: %p\n", (void *)&p);
    
    printf("\n=== Dereferenciación ===\n");
    printf("*p (valor en esa dirección): %d\n", *p);
    
    *p = 100;          
    printf("Nuevo valor de x: %d\n", x);
    
    return 0;
}