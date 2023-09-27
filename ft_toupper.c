#include <stdio.h>
#include <ctype.h>

char ft_toupper(char c) {
    if (c >= 'a' && c <= 'z') {
        return c - 32;
    }
    return c;
}

int main() {
    char c = 'a';
    char result = ft_toupper(c);
    char original_result = toupper(c);
    
    printf("Resultado de ft_toupper: %c\n", result);
    printf("Resultado de toupper: %c\n", original_result);

    return 0;
}

