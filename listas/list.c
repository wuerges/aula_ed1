#include<stdio.h>
#include<stdlib.h>

//estrutura do nodo da lista
typedef struct list{
	int id;
	struct list * next, * prev;
}list;

//estrutura da cabeça
typedef struct head{
	list * first, * last;
}head;

//insere no primeiro da lista
/*
void insert_lista(head * h, int x){
	list * nodo = malloc(sizeof(list));
	
	nodo->id = x;
	nodo->next = h->first;
	
	if(h->first == NULL){
		h->last = nodo;
		}
		
	else{
		h->first->prev = nodo;
		}

	h->first = nodo;		
	nodo->prev = NULL;
	
	}
*/

//insere no ultimo da lista
void insert_lista(head * h, int x){
	list * nodo = malloc(sizeof(list));
	
	nodo->id = x;
	nodo->next = NULL;
	
	if(h->first == NULL){
		h->first = nodo;
		}
		
	else{
		h->last->next = nodo;
		}
		
	nodo->prev = h->last;
	h->last = nodo;
		
	}

	
//insere ordenado

/*
void insert_lista(head * h, int x){
	list * nodo = malloc(sizeof(list));
		
	list * aux;
	
	for(aux = h->first; aux != NULL; aux = aux->next){
		if(h->first == NULL){
			h->first = nodo;
			h->last = nodo;
			nodo->prev = NULL;
			nodo->next = NULL;
			break;
			}
			
		else if(x < aux->id){
			aux->prev->next = nodo;
			nodo->prev = aux->prev;
		
			nodo->next = aux->prev;
			aux->prev = nodo;
			
			break;
			}
		}
	}		
*/

void print_lista(head * h){
	list * aux;
	
	for(aux = h->first; aux != NULL; aux = aux->next){
		printf("%d\n", aux->id);
		}		
	}

void delete_last(head * h){
	list * d;
	d = h->last;
	
	if(h->last == NULL && h->first == NULL){
		printf("Lista vazia!");
		}
	
	else if(h->last == h->first){
		h->last = NULL;
		h->first = NULL;
		}
		
	else{
		h->last = h->last->prev;
		h->last->next = NULL;		
		}
	
	free(d);
		
	}

int main(){
	
	head h;
	h.first = NULL;
	h.last = NULL;
	
	insert_lista(&h, 5);
	insert_lista(&h,10);
	insert_lista(&h,7);
	insert_lista(&h,9);	
	print_lista(&h);
	delete_last(&h);
	printf("\n");	
	print_lista(&h);
	
	return 0;
	}
	
	
	
	
