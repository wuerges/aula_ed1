/*
 * 3. Dê um procedimento que inverta uma lista simplesmente ligada de n 
 * elementos em tempo Θ(n). Em outras palavras, após inverter, os 
 * ponteiros devem apontar para trás.
 */

#include<stdio.h>
#include<stdlib.h>

typedef struct lista{
	int x;
	struct lista *next;
}lista;

typedef struct head{
	lista *first, *last;
	}head;

void print(lista * p){
	lista * aux = p;
		
	if(p == NULL){
		printf("Lista vazia!\n");
		}
	
	else{
		printf("%d ", aux->x);
		
		for(aux = p; aux->next!=NULL; aux = aux->next){
			printf("%d ", aux->next->x);
			}
		printf("\n");		
		}
	}

void insert(lista * p, int x){
	lista * nodo = malloc(sizeof(lista));
	
	if(p == NULL){
		p = nodo;
		}
	
	else{
		nodo->next = p;
		p = nodo;	
		}	
	}

int main(){

//	head h;
//	h.first = NULL;
//	h.last = NULL;
	
	lista * p = NULL;
	
	insert(&p,1);
	insert(&p,2);
	insert(&p,3);
	
	print(&p);
	
	
	
		
	return 0;
}
