#include <stdio.h>
#include <string.h>
int main(){
	char str[] = "Hello World!";
	int count = 0;
	int length = strlen(str);
	for(int i = 0; i < length; i++){
		if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')){
			count ++;
		}		
	}
	printf("%d", count);
	return 0;
}
