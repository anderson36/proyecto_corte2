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

void InsertarNodo_LD();
void Mostrar_ListaPU_LD();
void Mostrar_ListaUP_LD();
void BuscarNodo_LD();
void EditarNodo_LD();
void EliminarNodo_LD();
void menu();
void Mostrar_Lista();

int main(){
    menu();
    return 0;
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
                Mostrar_ListaPU();
                Mostrar_ListaUP();
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

// 2,3,4,5,6

//inicio=2
//fin= 2
// Lista Doble =  NULL <- 2 -> <-3 -> <-4 -> NULL
//nuevo= 5
//nodoBuscado=3
//Encontrado=0
//actual=
//anterior=NULL

void InsertarNodo_LD(){
    nodo* nuevo = reservar_memoria;
    printf("\n Ingrese el dato del nuevo Nodo:  ");
    scanf("%d",&nuevo->dato);

    if(inicio==NULL){
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
    printf("\n Nodo Ingresado coreectamente \n\n");
}

void Mostrar_ListaPU_LD(){
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

void Mostrar_ListaUP_LD(){
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

void BuscarNodo_LD(){
    nodo* actual=reservar_memoria;
    actual=inicio;
    int nodoBuscado=0,Encontrado=0;
    printf("\n Ingrese el dato del nodo a buscar");
    scanf("%d", &nodoBuscado);
    if(inicio!=NULL){
        while(actual!=NULL&&Encontrado!=1){

            if(actual->dato ==nodoBuscado){//compara cada uno de los datos con el nodo que se va a buscar
                printf("\n El Nodo con el dato (%d) Encontrado\n \n", nodoBuscado );
                Encontrado=1;
            }
            actual=actual->siguiente; //Actualiza el nodo
        }
        if(Encontrado==0){
            printf("\n Nodo no encontrado\n\n");
        }
    }else{
        printf("\n La lista se encuentra vacia");
    }
}

void EditarNodo_LD(){
    nodo* actual=reservar_memoria;
    actual=inicio;
    int nodoBuscado=0,Encontrado=0;
    printf("\n Ingrese el dato del nodo a buscar");
    scanf("%d", &nodoBuscado);
    if(inicio!=NULL){
        while(actual!=NULL&&Encontrado!=1){

            if(actual->dato ==nodoBuscado){//compara cada uno de los datos con el nodo que se va a buscar
                printf("\n El Nodo con el dato (%d) Encontrado\n \n", nodoBuscado );
                printf("\n Ingrese el nuevo dato para este nodo");
                scanf("\n %d", &actual->dato);
                printf("\n El Nodo Actualizado con exito");
                Encontrado=1;
            }
            actual=actual->siguiente; //Actualiza el nodo
        }
        if(Encontrado==0){
            printf("\n Nodo no encontrado\n\n");
        }
    }else{
        printf("\n La lista se encuentra vacia");
    }
}

void EliminarNodo_LD(){
    nodo* actual=reservar_memoria;
    actual=inicio;
    nodo* anterior=reservar_memoria; //crear nuevo nodo apuntador
    anterior=NULL;
    int nodoBuscado=0,Encontrado=0;
    printf("\n Ingrese el dato del nodo a buscar");
    scanf("%d", &nodoBuscado);
    if(inicio!=NULL){
        while(actual!=NULL&&Encontrado!=1){

            if(actual->dato ==nodoBuscado){//compara cada uno de los datos con el nodo que se va a buscar

                if(actual==inicio){ // Realiza el proceso si el nodo a eliminar es el primero
                    inicio=inicio->siguiente;
                    inicio->atras=NULL;
                }else if(actual==fin){ // Realiza la funcion si el nodo a eliminar es el ultimo
                    anterior->siguiente=NULL;
                    fin=anterior;
                }else{ // realiza la funcion si el nodo a eliminar es uno del medio
                    anterior->siguiente=actual->siguiente; // elimina el apuntador del nodo que se va a elimar
                    actual->siguiente->atras=anterior;//Modifica el nodo actual->siguiente

                }
                printf("\n Nodo eliminado con exito");

                Encontrado=1;
            }
            anterior=actual;    //va a tomar el valor de actual antes de que se actualiize
            actual=actual->siguiente; //Actualiza el nodo
        }
        if(Encontrado==0){
            printf("\n Nodo no encontrado\n\n");
        }else{
            free(anterior);
        }
    }else{
        printf("\n La lista se encuentra vacia");
    }
}


