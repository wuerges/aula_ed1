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

//insere na lista
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
	

void print_lista(head * h){
	list * aux;
	
	for(aux = h->first; aux != NULL; aux = aux->next){
		printf("%d\n", aux->id);
		}		
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
	
	return 0;
	}
	
	
	
	
