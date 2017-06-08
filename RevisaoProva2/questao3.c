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

lista * insert(lista * p, int id){
  lista * nodo = malloc(sizeof(lista));
  lista * aux;

  nodo->id = id;
  nodo->next = p;
  //p = nodo; nao faz nada

  return nodo;
}

void print(lista * p){
  lista * aux = p;

  for(aux; aux!=NULL; aux = aux->next){
    printf("%d ", aux->id);
  }	
}


int main(){

  lista * p;

  p = NULL;

  p = insert(p, 1);
  p = insert(p, 2);
  p = insert(p, 3);

  print(p);

  return 0;
}
