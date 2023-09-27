#include <stdio.h>
#include <string.h>

int ft_memcmp(const void* ptr1, const void* ptr2, size_t num) {
    const unsigned char* p1 = ptr1;
    const unsigned char* p2 = ptr2;
    while (num--) {
        if (*p1 != *p2) {
            return (*p1 - *p2);
        }
        p1++;
        p2++;
    }
    return 0;
}

int main() {
    const char str1[] = "Hello, world!";
    const char str2[] = "Hello, folks!";
    size_t num = 7;

    int result = ft_memcmp(str1, str2, num);
    int original_result = memcmp(str1, str2, num);

    printf("Resultado de ft_memcmp: %d\n", result);
    printf("Resultado de memcmp: %d\n", original_result);

    return 0;
}

