#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//estrutura do nodo da lista
typedef struct lista{
	int id;
	char nome[30];	
	struct lista * next, * prev;
}lista;

//estrutura da cabeça
typedef struct head{
	lista * first, * last;
}head;

//insere no primeiro da lista
void insert_lista(head * h, int idade, char nome[30]){
	lista * nodo = malloc(sizeof(lista));
	
	nodo->id = idade;
	strcpy(nodo->nome, nome);	
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

//insere 'x' ordenado pelo id na lista apontada por '*l'
void insert_ordenado(list ** l, int x){
    list * node = malloc (sizeof(list));
    list * it, * prev;

    //inicia os valores do nodo
    node->id = x;

    //encontra o lugar do elemento na lista
    for (prev = NULL, it = *l; (it != NULL) && (it->id < x); it = it->next){
        prev = it;   
    } 

    //caso for o primeiro elemento
    if(prev == NULL){
        *l = node;
    //para os outros dois casos
    }else
        prev->next = node;
    
    
    node->next = it;
}



void print_lista(head * h){
	lista * aux;
	
	for(aux = h->first; aux != NULL; aux = aux->next){
		printf("Nome: %s\n", aux->nome);
		printf("Idade: %d\n\n", aux->id);
		}		
	}


int main(){
	
	head h;
	h.first = NULL;
	h.last = NULL;
	
	insert_lista(&h, 30, "José");
	insert_lista(&h, 25, "Maria");
	
	print_lista(&h);
	
	return 0;
	}
	
	
	
	
	
	
	
	
	
	
	
