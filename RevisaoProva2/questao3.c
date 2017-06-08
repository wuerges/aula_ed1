#include<stdio.h>
#include<stdlib.h>

typedef struct lista{
	int id;
	lista * next;	
}lista;.

void insert(lista * p, int id){
	lista * nodo = malloc(sizeof(lista));
	lista * aux;
	
	nodo->id = id;
	nodo->next = NULL;		
	
	for(aux = p; aux->next!=NULL; aux = aux->next){
		}
	
	aux->next = nodo;	
	}
	
void print(lista * p){
	lista * aux;
	
	for(aux = p; aux!=NULL; aux = aux->next){
		printf("%d ", aux->id);
		}	
	}


int main(){

	lista * p;


return 0;
}
