#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	char *str;
	
	/*Initial memory allocation*/
	str = malloc(15);
	strcpy(str, "universidade: ");
	printf("String = %s, endereço = %p\n", str, &str);
	
	/*Reallocating memory*/
	str = realloc(str, 25);
	strcat(str, "UFFS");
	printf("String = %s, endereço = %p\n", str, &str);
	
	free(str);
	
	return 0;
	}
