#include <stdio.h>

int main() {
    char str[] = "Hello World"; 
    for (int i = 0; i < sizeof(str); i++) {
        printf("%c ", str[i]);  
    }

    return 0;
}

