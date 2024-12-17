#include <stdio.h>
#include <string.h>
char arr[50];
int main(){
	void sigma(char *arr);
	sigma(arr);
	return 0;
}

void sigma(char *arr){
	printf("Moi ban nhap : ");
	fgets(arr, 50, stdin);
	for(int i = 0; i < strlen(arr) - 1 ; i++){
		printf("%c\t", arr[i]);
	}
	printf("\n");
}
