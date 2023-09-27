#include <stdio.h>
#include <string.h>

char* ft_strnstr(const char* haystack, const char* needle, size_t len) {
    size_t needle_len = strlen(needle);
    if (needle_len == 0) {
        return (char*)haystack;
    }

    while (*haystack && len >= needle_len) {
        if (*haystack == *needle && memcmp(haystack, needle, needle_len) == 0) {
            return (char*)haystack;
        }
        haystack++;
        len--;
    }
    return NULL;
}

int main() {
    const char haystack[] = "Hello, world!";
    const char needle[] = "world";
    size_t len = strlen(haystack);

    char* result = ft_strnstr(haystack, needle, len);
    char* original_result = strnstr(haystack, needle, len);

    if (result != NULL) {
        printf("Resultado de ft_strnstr: %s\n", result);
    } else {
        printf("La subcadena no se encontró en la cadena.\n");
    }

    if (original_result != NULL) {
        printf("Resultado de strnstr: %s\n", original_result);
    } else {
        printf("La subcadena no se encontró en la cadena (original).\n");
    }

    return 0;
}

