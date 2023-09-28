#include <stdio.h>
#include <stdlib.h>

char* ft_strdup(const char* str) {
    size_t len = 0;
    const char* p = str;
    while (*p != '\0') {
        len++;
        p++;
    }

    char* new_str = (char*)malloc((len + 1) * sizeof(char));

    if (new_str != NULL) {
        char* dest = new_str;
        p = str;
        while (*p != '\0') {
            *dest = *p;
            dest++;
            p++;
        }
        *dest = '\0';
    }

    return new_str;
}

#include <string.h>

int main() {
    const char str[] = "Hello, world!";
    char *result = ft_strdup(str);

    if (result != NULL) {
        printf("ft_strdup: %s\n", result);
        free(result);
    } else {
        printf("La asignación de memoria con ft_strdup falló.\n");
    }

    char *original_result = strdup(str);

    if (original_result != NULL) {
        printf("strdup: %s\n", original_result);
        free(original_result);
    } else {
        printf("La asignación de memoria con strdup falló.\n");
    }

    return 0;
}

