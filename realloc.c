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

/*
 * Fazer programa que crie um vetor dinâmico para código, nome e nota.
 * Esses vetores poderão ser do tipo inteiro, caractere e float. 
 * O usuário também fornecerá a quantidade de elementos deste vetor. 
 * Ter uma função para ler e outra para escrever as informações em forma de relatório.
 * Requisitar se o usuário quer adicionar um registro ou imprimir o que se tem registrado.
 *  
 * */
