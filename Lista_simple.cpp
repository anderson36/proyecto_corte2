#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#define reservar_memoria (Nodo *)malloc(sizeof(Nodo))

typedef struct Nodo{
    int dato;
    Nodo* siguiente;
}nodo;

nodo* inicio =NULL;
nodo* fin=NULL;

void InsertarNodo();
void Mostrar_Lista();
void BuscarNodo();
void EditarNodo();
void EliminarNodo();
void menu();

int main(){
    menu();
    return 0;
}

// Lista = 2 -> 5 -> 6 ->  7 -.> NULL
//Valores = 2,5,6,7
//inicio=2
//fin= 7
//nuevo = 7
//actual = 2
//nodoBuscado = 5
//Encontrado = 0

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

void InsertarNodo(){
    nodo* nuevo=reservar_memoria;
    printf("\n Ingrese el dato del nuevo Nodo:  ");
    scanf("%d", &nuevo->dato);
    if(inicio==NULL){
        inicio=nuevo;
        inicio->siguiente=NULL;
        fin=nuevo;

    }else{
        fin->siguiente=nuevo;
        nuevo->siguiente=NULL;
        fin=nuevo;
    }
    printf("\n Nodo ingresado correctamente");
}

void Mostrar_Lista(){
    nodo* actual=reservar_memoria;
    actual=inicio;
    if(inicio!=NULL){
        while(actual!=NULL){
            printf("\n %d",actual->dato);
            actual=actual->siguiente;
        }
    }else{
        printf("\nLa lista se encuentra Vacia");
    }
}

void BuscarNodo(){
    nodo* actual=reservar_memoria;
    actual=inicio;
    int nodoBuscado=0, Encontrado=0;
    printf("\n Ingrese el nodo que desea buscar");
    scanf("\n %d", &nodoBuscado);
    if(inicio!=NULL){
        while(actual!=NULL&&Encontrado!=1){
                if(actual->dato==nodoBuscado){
                    printf("El nodo con el valor (%d) Encontado", nodoBuscado);
                    Encontrado=1;
                }
            actual=actual->siguiente;
        }
        if(Encontrado==0){
            printf("\n Nodo no encontrado");
        }
    }else{
        printf("\nLa lista se encuentra Vacia");
    }
}

void EditarNodo(){
    nodo* actual=reservar_memoria;
    actual=inicio;
    int nodoBuscado=0, Encontrado=0;
    printf("\n Ingrese el nodo que desea buscar");
    scanf("\n %d", &nodoBuscado);
    if(inicio!=NULL){
        while(actual!=NULL&&Encontrado!=1){
                if(actual->dato==nodoBuscado){
                    printf("\n El nodo con el valor (%d) Encontado", nodoBuscado);
                    printf("\n\n Ingrese el nuevo Valor para este nodo");
                    scanf("\n %d", &actual->dato);
                    printf("\n Nodo modificado con exito");
                    Encontrado=1;
                }
            actual=actual->siguiente;
        }
        if(Encontrado==0){
            printf("\n Nodo no encontrado");
        }
    }else{
        printf("\nLa lista se encuentra Vacia");
    }
}

void EliminarNodo(){
    nodo* actual=reservar_memoria;
    actual=inicio;
    nodo* anterior=reservar_memoria;
    anterior=NULL;
    int nodoBuscado=0, Encontrado=0;
    printf("\n Ingrese el nodo que desea Eliminar");
    scanf("\n %d", &nodoBuscado);
    if(inicio!=NULL){
        while(actual!=NULL&&Encontrado!=1){
                if(actual->dato==nodoBuscado){

                    if(actual==inicio){
                        inicio=inicio->siguiente;
                    }else if(actual==fin){
                        anterior->siguiente=NULL;
                        fin=anterior;
                    }else{
                        anterior->siguiente=actual->siguiente;
                    }
                    printf("\n Nodo Eliminado coreectamente");
                    Encontrado=1;
                }
            anterior=actual;
            actual=actual->siguiente;
        }
        if(Encontrado==0){
            printf("\n Nodo no encontrado");
        }else{
            free(anterior);
        }
    }else{
        printf("\nLa lista se encuentra Vacia");
    }
}
