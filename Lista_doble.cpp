#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#define reservar_memoria (Nodo *)malloc(sizeof(Nodo))

typedef struct Nodo{
    int dato;
    Nodo* siguiente;
    Nodo* atras;
}nodo;

nodo* inicio=NULL;
nodo* fin=NULL;

void InsertarNodo();
void Mostrar_ListaPU();
void Mostrar_ListaUP();
void menu();
void Mostrar_Lista();

int main(){

    return 0;
}

// 2,3,4,5,6

//inicio=2
//fin= 2
// Lista Doble =  NULL <- 2 -> <-3 -> <-4 -> NULL
//nuevo= 5
void InsertarNodo(){
    nodo* nuevo=reservar_memoria;
    printf("\n Ingrese el dato del nuevo Nodo:  ");
    scanf("%d", &nuevo->dato);

    if(inicio=NULL){
        inicio=nuevo;
        inicio->siguiente=NULL;
        inicio->atras=NULL;
        fin=inicio;
    }else{
        fin->siguiente=nuevo;
        nuevo->siguiente=NULL;
        nuevo->atras=fin;
        fin=nuevo;

    }

    printf("\n Nodo Ingresao coreectamente \n\n");
}

void Mostrar_ListaPU(){
    nodo* actual=reservar_memoria;
    actual=inicio;
    if(inicio!=NULL){
        while(actual!=NULL){
            printf("\n %d", actual->dato);
            actual=actual->siguiente;
        }
    }else{
        printf("\n La lista se encuentra vacia");
    }
}

void Mostrar_ListaUP(){
    nodo* actual=reservar_memoria;
    actual=fin;
    if(inicio!=NULL){
        while(actual!=NULL){
            printf("\n %d", actual->dato);
            actual=actual->atras;
        }
    }else{
        printf("\n La lista se encuentra vacia");
    }
}
