#include <stdio.h>
#include <unistd.h>
#include "../include/my_malloc.h"

void *my_malloc(size_t size) {
    void *block = sbrk(size);
    
    if (block == (void *)-1) {
        printf("Error: no hay memoria disponible\n");
        return NULL;
    }
    
    printf("Malloc: asignados %zu bytes en %p\n", size, block);
    return block;
}

void my_free(void *ptr) {
    printf("Free: liberando %p (aún no implementado)\n", ptr);
}