#include <stdio.h>
#include <stdlib.h>

void* ft_calloc(size_t count, size_t size) {
    size_t total_size = count * size;
    void* ptr = malloc(total_size);

    if (ptr != NULL) {
        unsigned char* p = (unsigned char*)ptr;
        while (total_size--) {
            *p = 0;
            p++;
        }
    }

    return ptr;
}

int main() {
    size_t count = 5;
    size_t size = sizeof(int);

    int* result = (int*)ft_calloc(count, size);
    if (result != NULL) {
        for (size_t i = 0; i < count; i++) {
            printf("%d ", result[i]);
        }
        printf("\n");

        free(result);
    } else {
        printf("La asignación de memoria falló.\n");
    }

    return 0;
}

