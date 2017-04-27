#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#define reservar_memoria (Nodo *)malloc(sizeof(Nodo))

typedef struct Nodo{
    int dato;
    Nodo* siguiente;
}nodo;

nodo* inicio = NULL;
nodo* fin= NULL;

void InsertarNodo_Cola();
void Mostrar_Lista_Cola();
void BuscarNodo_Cola();
void EditarNodo_Cola();
void EliminarNodo_Cola();
void menu();


int main(){

    menu();
    return 0;
}
 //inicio = NULL  nuevo =
 //fin= NULL

 // cola=
 //13,12,3,20

void InsertarNodo_Cola(){
    nodo* nuevo = reservar_memoria;
    printf("Ingrese el dato que contiene el nuevo nodo: \n");
    scanf("%d", &nuevo->dato);

    if(inicio==NULL){
        inicio=nuevo;
        inicio->siguiente=NULL;
        fin=nuevo;
    }else{
        fin->siguiente =nuevo;
        nuevo->siguiente = NULL;
        fin=nuevo;
    }
    printf("\n Nodo ingresado con exito \n");
}

void Mostrar_Lista_Cola(){
    nodo* actual = reservar_memoria;
    actual = inicio;
    if(inicio!=NULL){
        while(actual!=NULL){
            printf("\n %d",actual->dato);
            actual =actual->siguiente;
        }
    }else{
        printf("\n La cola no existe");
    }
}

void BuscarNodo_Cola(){
    nodo* actual = reservar_memoria;
    actual = inicio;
    int nodoBuscado=0,Encontrado=0;
    printf("ingrese el valor del nodo a buscar");
    scanf("%d", &nodoBuscado);
    if(inicio!=NULL){
        while(actual!=NULL&&Encontrado!=1){
            if(actual->dato == nodoBuscado){
                printf("\n Nodo con el dato(%d) encontrado", nodoBuscado);
                Encontrado=1;
            }
            actual=actual->siguiente;
        }
        if(Encontrado==0){
            printf("\n Nodo no encontrado \n \n");
        }
    }else{
        printf("\n La cola no existe");
    }
}

void EditarNodo_Cola(){
    nodo* actual = reservar_memoria;
    actual = inicio;
    int nodoBuscado=0,Encontrado=0;
    printf("ingrese el valor del nodo a buscar para Modificar");
    scanf("%d", &nodoBuscado);
    if(inicio!=NULL){
        while(actual!=NULL&&Encontrado!=1){
            if(actual->dato == nodoBuscado){
                printf("\n Nodo con el dato(%d) encontrado", nodoBuscado);
                printf("\n Ingrese el nuevo dato en este nodo");
                scanf("%d", &actual->dato);
                printf("\n Nodo modificado con exito \n\n");
                Encontrado=1;
            }
            actual=actual->siguiente;
        }
        if(Encontrado==0){
            printf("\n Nodo no encontrado \n \n");
        }
    }else{
        printf("\n La cola no existe");
    }
}

void EliminarNodo_Cola(){
    nodo* actual = reservar_memoria;
    actual = inicio;
    nodo* anterior=reservar_memoria;
    anterior=NULL;
    int nodoBuscado=0,Encontrado=0;
    printf("ingrese el valor del nodo a buscar para Eliminar");
    scanf("%d", &nodoBuscado);
    if(inicio!=NULL){
        while(actual!=NULL&&Encontrado!=1){
            if(actual->dato == nodoBuscado){
                if(actual == inicio){
                    inicio=inicio->siguiente;
                }else if(actual==fin){
                    anterior->siguiente=NULL;
                    fin =anterior;
                }else{
                    anterior->siguiente=actual->siguiente;
                }

                Encontrado=1;
            }
            anterior=actual;
            actual=actual->siguiente;
        }
        if(Encontrado==0){
            printf("\n Nodo no encontrado \n \n");
        }else{
            free(anterior);
        }
    }else{
        printf("\n La cola no existe");
    }
}

void menu(){
    int op=0;
    do{
        printf("\n ----------------MENU DE PILAS----------");
        printf("\nSelecione una opcion del menu");
        printf("\n 1- Insertar Elementos a la cola");
        printf("\n 2- Mostrar elementos de la cola");
        printf("\n 3- Buscar elemnto en la Pila");
        printf("\n 4- Modificar Nodo");
        printf("\n 5- Eliminar Nodo");
        printf("\n 6- Vaciar elementos de la Pila");
        printf("\n 7- Salir \n");
        scanf("%d", &op);
        switch (op){
            case 1:
                InsertarNodo();
                break;
            case 2:
                Mostrar_Lista();
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
                //VaciarLista();
                break;
            default: printf("\n Opcion invalida");
                break;
        }
    }while(op != 7);
}
