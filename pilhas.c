#include<stdio.h>
#include<stdbool.h>
#define STACKSIZE 100

struct stack {
	int top;
	int itens[STACKSIZE];
};

void printStack(struct stack *s){
	printf("Top: %d\n", s->top);
	printf("Itens: ");
	for(int i=0; i<=s->top; i++){
		printf("%d ", s->itens[i]);
	}
	printf("\n");
}

void pushFunction(struct stack *s, int valor){
	s->top++;	
	s->itens[s->top] = valor;
}

int popFunction(struct stack *s){
	int valor = s->itens[s->top];
	s->top--;

	return valor;
}

bool emptyFunction(struct stack *s){
	if((s->top)<0){
		return true;
	}
	else{
		return false;
	}
}

bool fullFunction(struct stack *s){
	if((s->top)==99){
		return true;
	}
	else{
		return false;
	}
}

int sizeFunction(struct stack *s){
	return s->top;
}

int stacktopFuncion(struct stack *s){
	return s->itens[s->top];
}


int main(){

	struct stack s;
	s.top = -1;

	int escolha = 0;

	do{
		printf("1- Para imprimir o stack\n");
		printf("2- Para função push\n");
		printf("3- Para função pop\n");
		printf("4- Para função empty\n");
		printf("5- Para função full\n");
		printf("6- Para função size\n");
		printf("7- Para função stack top\n");
		printf("8- Para sair\n");

		scanf("%d", &escolha);

		if(escolha==1){
			printStack(&s);
		}
		
		else if(escolha==2){
			printf("Digite o valor a ser inserido: ");
			int valor;
			scanf("%d", &valor);
			pushFunction(&s, valor);
		}

		else if(escolha==3){
			printf("Último valor: %d (removido\n)", popFunction(&s));
		}

		else if(escolha==4){
			int truefalse = emptyFunction(&s);

			if (truefalse==true){
				printf("Pilha vazia\n");
			}
			else{
				printf("Pilha não vazia\n");
			}
		}

		else if(escolha==5){
			int truefalse = fullFunction(&s);

			if (truefalse==true){
				printf("Pilha cheia\n");
			}
			else{
				printf("Pilha não cheia\n");
			}
		}

		else if(escolha==6){
			printf("Tamanho da pilha: %d\n", sizeFunction(&s));
		}

		else if(escolha==7){
			printf("Último elemento da lista: %d\n", stacktopFuncion(&s));
		}

	}while(escolha!=8);

	return 0;
}