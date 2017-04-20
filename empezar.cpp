#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#define reservar_memoria (Nodo *)malloc(sizeof(Nodo))

typedef struct Nodo{
    int dato;
    Nodo *siguiente;
}nodo;

nodo *inicio = NULL;

void insertarNodo();
void mostrar_pila();
void BuscarNodo();
void EditarNodo();
void EliminarNodo();
void VaciarLista();
void menu();

int main(){
   menu();

    return 0;
}

void insertarNodo(){
    nodo *nuevo=reservar_memoria;
    printf("\ningrese el dato que contiene el nuevo nodo \n");
    scanf("%d",&nuevo->dato);
    nuevo->siguiente=inicio;
    inicio=nuevo;
}

void mostrar_pila(){
    nodo *actual=reservar_memoria;
    actual=inicio;
    if(actual!=NULL){
        while(actual !=NULL){
            if (actual==inicio){
                printf("\n el primer Elemento de la pila es = %d\n", *actual);
            }
            printf("\n%d", actual->dato);
            actual=actual->siguiente;
        }
    }else{
        printf("\n La pila se encuentra vacia");
    }
}

void BuscarNodo(){
    int nodoBuscado =0, encontrado = 0;
    nodo *actual=reservar_memoria;
    actual=inicio;
    printf("\n Ingrese el dato a buscar");
    scanf("%d", &nodoBuscado);
    if(actual!=NULL){
        while(actual !=NULL){
           if(actual->dato == nodoBuscado){
                printf("\n El nodo ha sido encontrado (%d) Encontrado", nodoBuscado);
                encontrado=1;
           }
            actual=actual->siguiente;
        }
        if(encontrado==0){
            printf("\n Nodo no encontrado");
        }
    }else{
        printf("\n La pila se encuentra vacia");
    }
}

void EliminarNodo(){
    int nodoBuscado =0, encontrado = 0;
    nodo *actual=reservar_memoria;
    actual=inicio;
    nodo *anterior = reservar_memoria;
    anterior=NULL;
    printf("\n Ingrese el dato del Nodo a Buscar para elminar");
    scanf("%d", &nodoBuscado);
    if(actual!=NULL){
        while(actual !=NULL && encontrado!= 1){
           if(actual->dato == nodoBuscado){
                if(actual==inicio){
                    inicio=inicio->siguiente;
                }else{
                    anterior->siguiente=actual->siguiente;
                }
                printf("\n El nodo a sido eliminado correctamente");
                encontrado=1;
           }
            anterior=actual;
            actual=actual->siguiente;
        }
        if(encontrado==0){
            printf("\n Nodo no encontrado");
        }else{
            free(anterior);
        }
    }else{
        printf("\n La pila se encuentra vacia");
    }
}

void EditarNodo(){
   int nodoBuscado =0, encontrado = 0;
    nodo *actual=reservar_memoria;
    actual=inicio;
    printf("\n Ingrese el dato a buscar para modificar");
    scanf("%d", &nodoBuscado);
    if(actual!=NULL){
        while(actual !=NULL){
           if(actual->dato == nodoBuscado){
                printf("\n El nodo con el dato (%d) Encontrado", nodoBuscado);
                printf("\n Ingrese el nuevo dato para este nodo");
                scanf("%d",&actual->dato);

                printf("\n Nodo Modificado con exito");
                encontrado=1;
           }
            actual=actual->siguiente;
        }
        if(encontrado==0){
            printf("\n Nodo no encontrado");
        }
    }else{
        printf("\n La pila se encuentra vacia");
    }
}

void VaciarLista(){


    Nodo *aux=inicio;
    inicio->dato=aux->dato;
    inicio=aux->siguiente;
    free(aux);
}

void menu(){
    int op=0;
    do{
        printf("\n ----------------MENU DE PILAS----------");
        printf("\nSelecione una opcion del menu");
        printf("\n 1- Insertar Elementos a la pila");
        printf("\n 2- Imprimir elementos de la Pila");
        printf("\n 3- Buscar elemnto en la Pila");
        printf("\n 4- Modificar Nodo");
        printf("\n 5- Eliminar Nodo");
        printf("\n 6- Vaciar elementos de la Pila");
        printf("\n 7- Salir \n");
        scanf("%d", &op);
        switch (op){
            case 1:
                insertarNodo();
                break;
            case 2:
                mostrar_pila();
                break;
            case 3:
                BuscarNodo();
                break;
            case 4:
                EditarNodo();
                break;
            case 5:
                EliminarNodo();
                break;
            case 6:
                VaciarLista();
                break;
            default: printf("\n Opcion invalida");
                break;
        }
    }while(op != 7);
}

