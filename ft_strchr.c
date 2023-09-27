#include <stdio.h>
#include <string.h>

char* ft_strchr(const char* str, int c) {
    while (*str != '\0') {
        if (*str == c) {
            return (char*)str;
        }
        str++;
    }
    return NULL;
}

int main() {
    const char str[] = "Hello, world!";
    int c = 'o';
    char* result = ft_strchr(str, c);
    char* original_result = strchr(str, c);

    if (result != NULL) {
        printf("Resultado de ft_strchr: %s\n", result);
    } else {
        printf("El caracter no se encontró en la cadena.\n");
    }

    if (original_result != NULL) {
        printf("Resultado de strchr: %s\n", original_result);
    } else {
        printf("El caracter no se encontró en la cadena (original).\n");
    }

    return 0;
}

