#include <stdio.h>

int ft_atoi(const char* str) {
    int result = 0;
    int sign = 1;
    while (*str == ' ' || (*str >= '\t' && *str <= '\r')) {
        str++;
    }
    if (*str == '-' || *str == '+') {
        sign = (*str == '-') ? -1 : 1;
        str++;
    }
    while (*str >= '0' && *str <= '9') {
        result = result * 10 + (*str - '0');
        str++;
    }
    return result * sign;
}

int main() {
    const char str[] = "12345";
    int result = ft_atoi(str);
    int original_result = atoi(str);

    printf("Resultado de ft_atoi: %d\n", result);
    printf("Resultado de atoi: %d\n", original_result);

    return 0;
}

