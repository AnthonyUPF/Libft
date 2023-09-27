#include <stdio.h>
#include <string.h>

void* ft_memchr(const void* ptr, int value, size_t num) {
    const unsigned char* p = ptr;
    while (num--) {
        if (*p == (unsigned char)value) {
            return (void*)p;
        }
        p++;
    }
    return NULL;
}

int main() {
    const char str[] = "Hello, world!";
    int c = 'o';
    size_t num = strlen(str);

    void* result = ft_memchr(str, c, num);
    void* original_result = memchr(str, c, num);

    if (result != NULL) {
        printf("Resultado de ft_memchr: %s\n", (char*)result);
    } else {
        printf("El caracter no se encontró en la cadena.\n");
    }

    if (original_result != NULL) {
        printf("Resultado de memchr: %s\n", (char*)original_result);
    } else {
        printf("El caracter no se encontró en la cadena (original).\n");
    }

    return 0;
}

