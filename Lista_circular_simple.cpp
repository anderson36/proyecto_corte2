
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#define reservar_memoria (Nodo *)malloc(sizeof(Nodo))

typedef struct Nodo{
    int dato;
    Nodo* siguiente;
}nodo;

nodo* inicio = NULL;
nodo* fin = NULL;

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

void InsertarNodo(){
    nodo* nuevo = reservar_memoria;
    printf("Ingrese el dato que tendra el nuevo nodo: \n");
    scanf("%d", &nuevo->dato);

    if(inicio==NULL){
        inicio=nuevo;
        inicio->siguiente=inicio;
        fin=inicio;
    }else{
        fin->siguiente = nuevo;
        nuevo->siguiente = inicio;
        fin=nuevo;
    }
    printf("\n Nodo ingresado con exito");
}

void Mostrar_Lista(){
    nodo* actual = reservar_memoria;
    actual =inicio;
    if(inicio!=NULL){
        do{
            printf("\n %d", actual->dato);
            actual=actual->siguiente;
        }while(actual!=inicio);
    }else{
        printf("\n La lista esta vacia \n\n");
    }
}

void BuscarNodo(){
    nodo* actual = reservar_memoria;
    actual =inicio;
    int nodBuscado=0, Encontrado=0;
    printf("Ingrese el valor del nodo que desea Buscar");
    scanf("%d", &nodBuscado);
    if(inicio!=NULL){
        do{
            if(actual->dato == nodBuscado){
                printf("\n Nodo con el dato (%d) Encontrado \n\n", nodBuscado);
                Encontrado=1;
            }
            actual=actual->siguiente;
        }while(actual!=inicio && Encontrado!=1);

        if(Encontrado==0){
            printf("\n Nodo no encontrado\n\n");
        }
    }else{
        printf("\n La lista esta vacia \n\n");
    }
}

void EditarNodo(){
    nodo* actual = reservar_memoria;
    actual =inicio;
    int nodBuscado=0, Encontrado=0;
    printf("Ingrese el valor del nodo que desea Buscar para Modicarlo");
    scanf("%d", &nodBuscado);
    if(inicio!=NULL){
        do{
            if(actual->dato == nodBuscado){
                printf("\n Nodo con el dato (%d) Encontrado \n\n", nodBuscado);
                printf("\nIngrese el nuevo Dato para este Nodo: \t");
                scanf("%d", &actual->dato);
                printf("\n Nodo modificado correctamente");
                Encontrado=1;
            }
            actual=actual->siguiente;
        }while(actual!=inicio && Encontrado!=1);

        if(Encontrado==0){
            printf("\n Nodo no encontrado\n\n");
        }
    }else{
        printf("\n La lista esta vacia \n\n");
    }
}

void EliminarNodo(){
    nodo* actual = reservar_memoria;
    actual =inicio;
    nodo* anterior = reservar_memoria;
    anterior=NULL;
    int nodBuscado=0, Encontrado=0;
    printf("Ingrese el valor del nodo que desea Buscar para Eliminar");
    scanf("%d", &nodBuscado);
    if(inicio!=NULL){
        do{
            if(actual->dato == nodBuscado){
                printf("\n Nodo con el dato (%d) Encontrado \n\n", nodBuscado);

                if(actual==inicio){
                    inicio=inicio->siguiente;
                    fin->siguiente=inicio;

                }else if(actual==fin){
                    anterior->siguiente=inicio;
                    fin=anterior;
                }else{
                    anterior->siguiente=actual->siguiente;
                }
                printf("\n Nodo Eliminado\n\n");
                Encontrado=1;
            }
            anterior=actual;
            actual=actual->siguiente;
        }while(actual!=inicio && Encontrado!=1);

        if(Encontrado==0){
            printf("\n Nodo no encontrado\n\n");
        }else{
            free(anterior);
        }
    }else{
        printf("\n La lista esta vacia \n\n");
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
