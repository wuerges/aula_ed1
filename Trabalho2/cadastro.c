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
void insert_ordenado(head * h, int idade, char nome[30]){
    lista * nodo = malloc (sizeof(lista));
    lista * aux;

    //inicia os valores do nodo
	nodo->id = idade;
	strcpy(nodo->nome, nome);	

    //encontra o lugar do elemento na lista
    for(aux = h->first; (aux!=NULL) && (aux->id < nodo->id); aux = aux->next){
		
		//caso for o primeiro elemento
		if(aux == NULL){
			h->last = h->last = nodo;
			printf("adicionou no primeiro\n");
			}
			
		//caso seja o último elemento
		else if(aux->next == NULL){
			aux->next = nodo;
			nodo->next = NULL;
			nodo->prev = aux;
			printf("adicionou no ultimo\n");		
			}
		
		//caso seja inserido no meio
		else{
			aux->prev->next = nodo;
			nodo->prev = aux->prev->next;
			aux->prev = nodo;
			nodo->next = aux;
			printf("adicionou no ultimo\n");		
			}			
		}
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
	
	insert_ordenado(&h, 30, "José");
	insert_ordenado(&h, 25, "Maria");
	insert_ordenado(&h, 50, "Maria");
	insert_ordenado(&h, 45, "Maria");
	
//	insert_lista(&h, 30, "José");
//	insert_lista(&h, 25, "Maria");	
	
	print_lista(&h);
	
	return 0;
	}
	
	
	
	
	
	
	
	
	
	
	
