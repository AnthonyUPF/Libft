#include <stdio.h>
#include <string.h>

int ft_strncmp(const char* str1, const char* str2, size_t n) {
    while (n--) {
        if (*str1 != *str2) {
            return (*str1 - *str2);
        }
        if (*str1 == '\0') {
            return 0;
        }
        str1++;
        str2++;
    }
    return 0;
}

int main() {
    const char str1[] = "Hello, world!";
    const char str2[] = "Hello, folks!";
    size_t n = 7;

    int result = ft_strncmp(str1, str2, n);
    int original_result = strncmp(str1, str2, n);

    printf("Resultado de ft_strncmp: %d\n", result);
    printf("Resultado de strncmp: %d\n", original_result);

    return 0;
}

