
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
                //BuscarNodo();
                break;
            case 4:
               // EditarNodo();
                break;
            case 5:
               // EliminarNodo();
                break;
            case 6:
                //VaciarLista();
                break;
            default: printf("\n Opcion invalida");
                break;
        }
    }while(op != 7);
}
