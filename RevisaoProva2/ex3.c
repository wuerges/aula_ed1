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

void print(head * h){
	lista * aux = h->first;
	
	if(h->first == NULL){
		printf("Lista vazia!\n");
		}
	
	else{
		printf("%d ", aux->x);
		
		for(aux = h->first; aux->next!=h->first; aux = aux->next){
			printf("%d ", aux->next->x);
			}
		printf("\n");		
		}
	}

void insert(lista * p, int x){
	lista * nodo = malloc(sizeof(lista));
	
	nodo->next = p;
	p = nodo;
	
	}

void delete(head * h){
	lista * aux1, *aux2;
	
	for(aux = p; aux!=NULL; aux = aux->next){
		if(aux->next == NULL){
			aux2 = aux;
			}
		}
	
	
	 	
	
	}

int empty(head * h){
	int r;
	if(h->first == NULL){
		r = 0;
		}
	else{
		delete(h);
		r = 1;
		}	
	return r;
	}
	
int search(head * h, int x){
	lista * aux;

	if(h->first->x==x){
		printf("Posição na lista: %d\n", 0);
		}
	else{
		int count = 1;
		for(aux = h->first; aux->next!=h->first; aux = aux->next){
			if ((aux->next->x)==x){
				printf("Posição na lista: %d\n", count);
				}
			}		
		}	
	}
	
int main(){

	head h;
	h.first = NULL;
	h.last = NULL;
	
	insert(&h,1);
	insert(&h,2);
	insert(&h,3);
	
	print(&h);
	search(&h, 2);
	
	empty(&h);	
	print(&h);
	
	
	
		
	return 0;
}
