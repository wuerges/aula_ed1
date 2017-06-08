/*
 * 3. Dê um procedimento que inverta uma lista simplesmente ligada de n 
 * elementos em tempo Θ(n). Em outras palavras, após inverter, os 
 * ponteiros devem apontar para trás.
 */

#include<stdio.h>
#include<stdlib.h>

typedef struct lista{
	int id;
	struct lista * next;	
}lista;

void insert(lista * p, int id){
	lista * nodo = malloc(sizeof(lista));
	lista * aux;

	nodo->id = id;
	nodo->next = NULL;		
	
	for(aux = p; aux->next!=NULL; aux = aux->next){
		}

	if(aux == p){
		p = nodo;
		printf("inseriu no começo\n");
		}
		
	else{
		aux->next = nodo;
		printf("inseriu no meio\n");		
		}

	}
	
void print(lista * p){
	lista * aux;
	
	for(aux = p; aux!=NULL; aux = aux->next){
		printf("%d ", aux->id);
		}	
	}


int main(){

	lista * p;
	
	p = NULL;

	insert(p, 1);
	insert(p, 2);
	insert(p, 3);
	
	print(p);
	


	
	


return 0;
}
