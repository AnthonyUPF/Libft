#include <stdio.h>
#include <ctype.h>

char ft_tolower(char c) {
    if (c >= 'A' && c <= 'Z') {
        return c + 32;
    }
    return c;
}

int main() {
    char c = 'A';
    char result = ft_tolower(c);
    char original_result = tolower(c);
    
    printf("Resultado de ft_tolower: %c\n", result);
    printf("Resultado de tolower: %c\n", original_result);

    return 0;
}

