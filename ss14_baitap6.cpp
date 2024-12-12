#include <stdio.h>
#include <ctype.h>  

int main() {
    char str[100];
    int count = 0; 

    printf("nhap vao mot chuoi: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            count++;
        }
    }
    printf("so luong chu cai trong chuoi la: %d\n", count);

    return 0;
}
