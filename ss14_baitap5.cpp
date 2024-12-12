#include <stdio.h>
#include <string.h>

int main(){
	int count = 0;
	char str[] = "Hello World!";
	int length = strlen(str);

	for(int i = 0; i <= length; i++){
		if (str[i] == ' '){
			count ++;
		}
		if (str[i] == '\0'){
			count ++;
		}
	}
	
	printf("%d", count);
	
	return 0;
}
