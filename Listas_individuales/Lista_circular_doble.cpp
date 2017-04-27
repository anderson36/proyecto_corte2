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

void menu();
//Prototipo de funcion Lista Circular doble
void InsertarNodo_LCD();
void Mostrar_ListaPU_LCD();
void Mostrar_ListaUP_LCD();
void BuscarNodo_LCD();
void EditarNodo_LCD();
void EliminarNodo_LCD();

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

void InsertarNodo_LCD(){
    nodo* nuevo= reservar_memoria;
    printf("Ingrese el dato que tendra el nuevo nodo");
    scanf("%d", &nuevo->dato);

    if(inicio==NULL){
        inicio=nuevo;
        inicio->siguiente=inicio;
        fin=inicio;
        inicio->atras=fin;
    }else{
        fin->siguiente=nuevo;
        nuevo->siguiente=inicio;
        nuevo->atras=fin;
        fin=nuevo;
        inicio->atras=fin;
    }
    printf("\n Nodo Ingresado correctamente\n\n");
}

void Mostrar_ListaPU_LCD(){
    nodo* actual=reservar_memoria;
    actual=inicio;
    if(inicio!=NULL){
        do{
            printf("\n %d", actual->dato);
            actual=actual->siguiente;
        }while(actual!=inicio);
    }else{
        printf("\n La lista se encuentra vacia");
    }
}

void Mostrar_ListaUP_LCD(){
    nodo* actual=reservar_memoria;
    actual=fin;
    if(inicio!=NULL){
        do{
            printf("\n %d", actual->dato);
            actual=actual->atras;
        }while(actual!=fin);
    }else{
        printf("\n La lista se encuentra vacia");
    }
}

void BuscarNodo_LCD(){
    nodo* actual=reservar_memoria;
    actual=inicio;
    int nodoBuscado=0, Encontrado=0;
    printf("\n Ingrese el valor del Nodo a buscar");
    scanf("%d", &nodoBuscado);
    if(inicio!=NULL){
        do{
            if(actual->dato==nodoBuscado){
                printf("\n Nodo con el dato(%d) Encontrado \n\n", nodoBuscado);
                Encontrado=1;
            }
            actual=actual->siguiente;
        }while(actual!=inicio&&Encontrado!=1);
        if(Encontrado==0){
            printf("\n Nodo no encontrado");
        }
    }else{
        printf("\n La lista se encuentra vacia");
    }
}

void EditarNodo_LCD(){
    nodo* actual=reservar_memoria;
    actual=inicio;
    int nodoBuscado=0, Encontrado=0;
    printf("\n Ingrese el valor del Nodo a buscar para modificar");
    scanf("%d", &nodoBuscado);
    if(inicio!=NULL){
        do{
            if(actual->dato==nodoBuscado){
                printf("\n Nodo con el dato(%d) Encontrado \n\n", nodoBuscado);
                printf("\n Ingrese el nuevo dato para este nodo");
                scanf("%d", &actual->dato);
                printf("\n Nodo modificado correctamente");
                Encontrado=1;
            }
            actual=actual->siguiente;
        }while(actual!=inicio&&Encontrado!=1);
        if(Encontrado==0){
            printf("\n Nodo no encontrado");
        }
    }else{
        printf("\n La lista se encuentra vacia");
    }
}

//inicio = 3   ultimo = 6  actual=4  anterior=3 nodoBuscado = 4  Encontrado =0

//Lista Circular Doble 3,4,5,6   -----


void EliminarNodo_LCD(){
    nodo* actual=reservar_memoria;
    actual=inicio;
    nodo* anterior=reservar_memoria;
    anterior=NULL;
    int nodoBuscado=0, Encontrado=0;
    printf("\n Ingrese el valor del Nodo a buscar para Eliminar");
    scanf("%d", &nodoBuscado);
    if(inicio!=NULL){
        do{
            if(actual->dato==nodoBuscado){
                printf("\n Nodo con el dato(%d) Encontrado \n\n", nodoBuscado);

                if(actual==inicio){
                    inicio=inicio->siguiente;
                    inicio->atras=fin;
                    fin->siguiente=inicio;
                }else if(actual==fin){
                    fin=anterior;
                    fin->siguiente=inicio;
                    inicio->atras =fin;
                }else{
                    anterior->siguiente=actual->siguiente;
                    actual->siguiente->atras=anterior;
                }

                Encontrado=1;
            }
            anterior=actual;
            actual=actual->siguiente;
        }while(actual!=inicio&&Encontrado!=1);
        if(Encontrado==0){
            printf("\n Nodo no encontrado");
        }else{
            free(anterior);
        }
    }else{
        printf("\n La lista se encuentra vacia");
    }
}
