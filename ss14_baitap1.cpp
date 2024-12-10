#include <stdio.h>

int main() {
    char str[] = "Hello World";
printf("%d ", sizeof(str));  
    for (int i = 0; i < sizeof(str); i++) {
        printf("%c ", str[i]);  
    }

    return 0;
}

