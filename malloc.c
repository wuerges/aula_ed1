#include<stdio.h>
#include<stdlib.h>

void printvetor(char * ponteiro){
	int i;
	for (i = 0; i<=5; i++){
		printf("%c", *(ponteiro+i));
		}
	printf("\n");
	}

int main(){
	
	char *f;
	int tamanho;
	
	printf("Digite a quantidade de caracteres desejada: ");
	scanf("%d", &tamanho);
			
	f = malloc(tamanho * sizeof(char));
	int i,j;
	
	for (i=0; i<=tamanho; i++){
		scanf("%c", f+i);
		}
		
	printvetor(f);	
				
	free(f);


return 0;
}
