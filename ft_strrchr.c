#include <stdio.h>
#include <string.h>

char* ft_strrchr(const char* str, int c) {
    const char* last_occurrence = NULL;
    while (*str != '\0') {
        if (*str == c) {
            last_occurrence = str;
        }
        str++;
    }
    return (char*)last_occurrence;
}

int main() {
    const char str[] = "Hello, world!";
    int c = 'o';
    char* result = ft_strrchr(str, c);
    char* original_result = strrchr(str, c);

    if (result != NULL) {
        printf("Resultado de ft_strrchr: %s\n", result);
    } else {
        printf("El caracter no se encontró en la cadena.\n");
    }

    if (original_result != NULL) {
        printf("Resultado de strrchr: %s\n", original_result);
    } else {
        printf("El caracter no se encontró en la cadena (original).\n");
    }

    return 0;
}

