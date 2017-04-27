/*Proyecto PILAS,LISTAS Y COLAS
CORPORACION DE ESTUDIOS TECNOLOGICOS DEL NORTE DEL VALLE
ESTRUCTURAS DE DATOS II
    POR: JHON ANDERSON SANCHEZ BURITICA
    DOCENTE: CARLOS ALBERTO LONDOÑO

NOTAS:
-Todo el menu de listas funciona correctamente.
-No se añadio las funciones Anexas ya que se presento problemas
para crear la segunda lista.*/

#include <stdlib.h>
#include <stdio.h>
//#include <conio.h>
#define reservar_memoria (Nodo *)malloc(sizeof(Nodo))

typedef struct Nodo{
    int dato;
    Nodo* siguiente;
    Nodo* atras;
}nodo;

nodo* inicio=NULL;
nodo* fin=NULL;


void MenuProyecto();
void EliminarLista();
//Prototipo de funcion Lista LIFO
void InsertarNodo();
void Mostrar_Lista();
void BuscarNodo();
void EditarNodo();
void EliminarNodo();
void VaciarLista();
//Prototipo de funcion Lista FIFO
void InsertarNodo_Cola();
void Mostrar_Lista_Cola();
void BuscarNodo_Cola();
void EditarNodo_Cola();
void EliminarNodo_Cola();
//Prototipo de funcion Lista Circular doble
void InsertarNodo_LCD();
void Mostrar_ListaPU_LCD();
void Mostrar_ListaUP_LCD();
void BuscarNodo_LCD();
void EditarNodo_LCD();
void EliminarNodo_LCD();
//Prototipo de funcion Lista Circular Simple
void InsertarNodo_LCS();
void Mostrar_Lista_LCS();
void BuscarNodo_LCS();
void EditarNodo_LCS();
void EliminarNodo_LCS();
//Prototipo de funcion Lista Simple
void InsertarNodo_LS();
void Mostrar_Lista_LS();
void BuscarNodo_LS();
void EditarNodo_LS();
void EliminarNodo_LS();
//Prototipo de funcion Lista Doble
void InsertarNodo_LD();
void Mostrar_ListaPU_LD();
void Mostrar_ListaUP_LD();
void BuscarNodo_LD();
void EditarNodo_LD();
void EliminarNodo_LD();


int main(){
    MenuProyecto();
    return 0;
}

void MenuProyecto(){

    int op;
    do{
        printf("______________________   Menu Del proyecto _____________________");
        printf("\n______________________________________________________________");
        printf("\n| 1- LIFO                  || 4-  Lista Circular Doble  ");
        printf("\n| 2- FIFO                  || 5-  Lista Simple          ");
        printf("\n| 3- Lista Circular Simple || 6-  Lista doble           ");
        printf("\n| ___________________________________________________________");
        printf("\nSelecione La lista que desea crear:\n\n");
        scanf("%d", &op);
        system("Pause");
        system("cls");
        switch(op){
            case 1:
                int op1,a;

                do{
                    printf("\nLISTA (LIFO)\n\n");
                    printf("\nSelecione una opcion\n");
                    printf("\n| 1- Insertar Elemento");
                    printf("\n| 2- Mostrar Elementos");
                    printf("\n| 3- Buscar Elemento");
                    printf("\n| 4- Eliminar Elemento");
                    printf("\n| 5- Editar Elemento");
                    printf("\n| 6- Vaciar Elemento");
                    printf("\n| 7- Eliminar Lista");
                    printf("\n| 8- Volver al menu");
                    printf("\n| 9- Salir\n");
                    scanf("%d",&op1);
                    system("Pause");
                    system("cls");

                    switch(op1){
                        case 1:
                            printf("\nHAS SELECIONADO - INSERTAR ELEMENTOS\n\n");

                            a=1;
                            while(a==1){
                                InsertarNodo();
                                printf("\nQuieres ingresar otro elemento \n1-Si\n2-NO\n\n ");
                                scanf("%d",&a);

                            }
                                printf("\nTodos los elementos ingresados correctamente\n\n");
                            break;
                        case 2:
                            printf("\nHAS SELECIONADO - MOSTRAR ELEMENTOS\n");
                            Mostrar_Lista();
                            break;
                        case 3:
                            printf("\nHAS SELECIONADO - BUSCAR ELEMENTOS\n");
                            BuscarNodo();
                            break;
                        case 4:
                            printf("\nHAS SELECIONADO - ELIMINAR ELEMENTOS\n");
                            EliminarNodo();
                            break;
                        case 5:
                            printf("\nHAS SELECIONADO - EDITAR ELEMENTOS\n");
                            EditarNodo();
                            break;
                        case 6:
                            printf("\nHAS SELECIONADO - VACIAR ELEMENTOS\n");
                            VaciarLista();
                            printf("\n\nElemento sacado correctamente\n");
                            break;
                        case 7:
                            printf("\nHAS SELECIONADO - ELIMINAR LISTA\n");
                            //Funcion en constraccion
                            EliminarLista();


                            break;
                        case 8:
                            printf("\nVOLVIENDO AL MUENU DEL PROYECTO\n");
                            MenuProyecto();
                            break;
                        case 9:
                            printf("\nPROGRAMA FINALIZADO\n");
                            exit(0);
                            break;
                        default:
                            printf("\nOPCION NO VALIDA \n\n");
                            printf("\nVUELVA A INTENTARLO \n\n");
                            break;
                    }
                }while(op1!=9);

                break;
            case 2:
                 int op2,b;

                do{
                    printf("\nCOLAS (FIFO)\n\n");
                    printf("\nSelecione una opcion\n");
                    printf("\n| 1- Insertar Elemento");
                    printf("\n| 2- Mostrar Elementos");
                    printf("\n| 3- Buscar Elemento");
                    printf("\n| 4- Eliminar Elemento");
                    printf("\n| 5- Editar Elemento");
                    printf("\n| 6- Vaciar Elemento");
                    printf("\n| 7- Eliminar Lista");
                    printf("\n| 8- Volver al menu");
                    printf("\n| 9- Salir\n");
                    scanf("%d",&op2);
                    system("Pause");
                    system("cls");
                    switch(op2){
                        case 1:
                            printf("\nHAS SELECIONADO - INSERTAR ELEMENTOS\n\n");

                            b=1;
                            while(b==1){
                                InsertarNodo_Cola();
                                printf("\nQuieres ingresar otro elemento \n1-Si\n2-NO\n\n ");
                                scanf("%d",&b);

                            }
                                printf("\nTodos los elemntos ingresados coreectamente\n\n");
                            break;
                        case 2:
                            printf("\nHAS SELECIONADO - MOSTRAR ELEMENTOS\n");
                            Mostrar_Lista_Cola();
                            break;
                        case 3:
                            printf("\nHAS SELECIONADO - BUSCAR ELEMENTOS\n");
                            BuscarNodo_Cola();

                            break;
                        case 4:
                            printf("\nHAS SELECIONADO - ELIMINAR ELEMENTOS\n");
                            EliminarNodo_Cola();
                            break;
                        case 5:
                            printf("\nHAS SELECIONADO - EDITAR ELEMENTOS\n");
                            EditarNodo_Cola();
                            break;
                        case 6:
                            printf("\nHAS SELECIONADO - VACIAR ELEMENTOS\n");
                            VaciarLista();
                            break;
                        case 7:
                            printf("\nHAS SELECIONADO - ELIMINAR LISTA\n");

                            break;
                        case 8:
                            printf("\nVOLVIENDO AL MUENU DEL PROYECTO\n");
                            MenuProyecto();
                            break;
                        case 9:
                            printf("\nPROGRAMA FINALIZADO\n");
                            exit(0);

                            break;
                        default:
                            printf("\nOPCION NO VALIDA \n\n");
                            printf("\nVUELVA A INTENTARLO \n\n");
                            break;
                    }
                }while(op2!=9);
                break;
            case 3:
                int op3,c;

                do{
                    printf("\nLISTA CIRCULAR DOBLEMENTE ENLAZADAS\n\n");
                    printf("\nSelecione una opcion\n");
                    printf("\n| 1- Insertar Elemento");
                    printf("\n| 2- Mostrar Elementos");
                    printf("\n| 3- Buscar Elemento");
                    printf("\n| 4- Eliminar Elemento");
                    printf("\n| 5- Editar Elemento");
                    printf("\n| 6- Vaciar Elemento");
                    printf("\n| 7- Eliminar Lista");
                    printf("\n| 8- Volver al menu");
                    printf("\n| 9- Salir\n");
                    scanf("%d",&op3);
                    system("Pause");
                    system("cls");
                    switch(op3){
                        case 1:
                            printf("\nHAS SELECIONADO - INSERTAR ELEMENTOS\n\n");

                            c=1;
                            while(c==1){
                                InsertarNodo_LCD();
                                printf("\nQuieres ingresar otro elemento \n1-Si\n2-NO\n\n ");
                                scanf("%d",&c);

                            }
                                printf("\nTodos los elemntos ingresados coreectamente\n\n");
                            break;
                        case 2:
                            printf("\nHAS SELECIONADO - MOSTRAR ELEMENTOS\n");
                            printf("\nLista del primero al ultimo\n");
                            Mostrar_ListaPU_LCD();
                            printf("\nLista del ultimo al primero\n");
                            Mostrar_ListaUP_LCD();
                            break;
                        case 3:
                            printf("\nHAS SELECIONADO - BUSCAR ELEMENTOS\n");
                            BuscarNodo_LCD();

                            break;
                        case 4:
                            printf("\nHAS SELECIONADO - ELIMINAR ELEMENTOS\n");
                            EliminarNodo_LCD();
                            break;
                        case 5:
                            printf("\nHAS SELECIONADO - EDITAR ELEMENTOS\n");
                            EditarNodo_LCD();
                            break;
                        case 6:
                            printf("\nHAS SELECIONADO - VACIAR ELEMENTOS\n");
                            VaciarLista();
                            break;
                        case 7:
                            printf("\nHAS SELECIONADO - ELIMINAR LISTA\n");
                            printf("\nFuncion en construccion\n");

                            break;
                        case 8:
                            printf("\nVOLVIENDO AL MUENU DEL PROYECTO\n");
                            MenuProyecto();
                            break;
                        case 9:
                            printf("\nPROGRAMA FINALIZADO\n");
                            exit(0);

                            break;
                        default:
                            printf("\nOPCION NO VALIDA \n\n");
                            printf("\nVUELVA A INTENTARLO \n\n");
                            break;
                    }
                }while(op3!=10);
                break;
            case 4:
                int op4,d;

                do{
                    printf("\nLISTA CIRCULAR SIMPLEMENTE ENLAZADAS\n\n");
                    printf("\nSelecione una opcion\n");
                    printf("\n| 1- Insertar Elemento");
                    printf("\n| 2- Mostrar Elementos");
                    printf("\n| 3- Buscar Elemento");
                    printf("\n| 4- Eliminar Elemento");
                    printf("\n| 5- Editar Elemento");
                    printf("\n| 6- Vaciar Elemento");
                    printf("\n| 7- Eliminar Lista");
                    printf("\n| 8- Volver al menu");
                    printf("\n| 9- Salir\n");
                    scanf("%d",&op4);
                    system("Pause");
                    system("cls");
                    switch(op4){
                        case 1:
                            printf("\n\nHAS SELECIONADO - INSERTAR ELEMENTOS\n\n");

                            d=1;
                            while(d==1){
                                InsertarNodo_LCS();
                                printf("\nQuieres ingresar otro elemento \n1-Si\n2-NO\n\n ");
                                scanf("%d",&d);

                            }
                                printf("\nTodos los elemntos ingresados coreectamente\n\n");
                            break;
                        case 2:
                            printf("\nHAS SELECIONADO - MOSTRAR ELEMENTOS\n");
                            Mostrar_Lista_LCS();
                            break;
                        case 3:
                            printf("\nHAS SELECIONADO - BUSCAR ELEMENTOS\n");
                            BuscarNodo_LCS();

                            break;
                        case 4:
                            printf("\nHAS SELECIONADO - ELIMINAR ELEMENTOS\n");
                            EliminarNodo_LCS();
                            break;
                        case 5:
                            printf("\nHAS SELECIONADO - EDITAR ELEMENTOS\n");
                            EditarNodo_LCS();
                            break;
                        case 6:
                            printf("\nHAS SELECIONADO - VACIAR ELEMENTOS\n");
                            VaciarLista();
                            break;
                        case 7:
                            printf("\nHAS SELECIONADO - ELIMINAR LISTA\n");

                            break;
                        case 8:
                            printf("\nVOLVIENDO AL MUENU DEL PROYECTO\n");
                            MenuProyecto();
                            break;
                        case 9:
                            printf("\nPROGRAMA FINALIZADO\n");
                            exit(0);

                            break;
                        default:
                            printf("\nOPCION NO VALIDA \n\n");
                            printf("\nVUELVA A INTENTARLO \n\n");
                            break;
                    }
                }while(op4!=9);
                break;
            case 5:
                int op5,e;

                do{
                    printf("\nlISTA SIMPLE\n\n");
                    printf("\nSelecione una opcion\n");
                    printf("\n| 1- Insertar Elemento");
                    printf("\n| 2- Mostrar Elementos");
                    printf("\n| 3- Buscar Elemento");
                    printf("\n| 4- Eliminar Elemento");
                    printf("\n| 5- Editar Elemento");
                    printf("\n| 6- Vaciar Elemento");
                    printf("\n| 7- Eliminar Lista");
                    printf("\n| 8- Volver al menu");
                    printf("\n| 9- Salir\n");
                    scanf("%d",&op5);
                    system("Pause");
                    system("cls");
                    switch(op5){
                        case 1:
                            printf("\n\nHAS SELECIONADO - INSERTAR ELEMENTOS\n\n");

                            e=1;
                            while(e==1){
                                InsertarNodo_LS();
                                printf("\nQuieres ingresar otro elemento \n1-Si\n2-NO\n\n ");
                                scanf("%d",&e);

                            }
                                printf("\nTodos los elemntos ingresados coreectamente\n\n");
                            break;
                        case 2:
                            printf("\nHAS SELECIONADO - MOSTRAR ELEMENTOS\n");
                            Mostrar_Lista_LS();
                            break;
                        case 3:
                            printf("\nHAS SELECIONADO - BUSCAR ELEMENTOS\n");
                            BuscarNodo_LS();

                            break;
                        case 4:
                            printf("\nHAS SELECIONADO - ELIMINAR ELEMENTOS\n");
                            EliminarNodo_LS();
                            break;
                        case 5:
                            printf("\nHAS SELECIONADO - EDITAR ELEMENTOS\n");
                            EditarNodo_LS();
                            break;
                        case 6:
                            printf("\nHAS SELECIONADO - VACIAR ELEMENTOS\n");
                            VaciarLista();
                            break;
                        case 7:
                            printf("\nHAS SELECIONADO - ELIMINAR LISTA\n");

                            break;
                        case 8:
                            printf("\nVOLVIENDO AL MUENU DEL PROYECTO\n");
                            MenuProyecto();
                            break;
                        case 9:
                            printf("\nPROGRAMA FINALIZADO\n");

                            break;
                        default:
                            printf("\nOPCION NO VALIDA \n\n");
                            printf("\nVUELVA A INTENTARLO \n\n");
                            break;
                    }
                }while(op5!=9);
                break;
            case 6:
                int op6,f;

                do{
                    printf("\n\nLISTA DOBLEMENTE ENLAZADAS\n\n");
                    printf("\nSelecione una opcion\n");
                    printf("\n| 1- Insertar Elemento");
                    printf("\n| 2- Mostrar Elementos");
                    printf("\n| 3- Buscar Elemento");
                    printf("\n| 4- Eliminar Elemento");
                    printf("\n| 5- Editar Elemento");
                    printf("\n| 6- Vaciar Elemento");
                    printf("\n| 7- Eliminar Lista");
                    printf("\n| 8- Volver al menu");
                    printf("\n| 9- Salir\n");
                    scanf("%d",&op6);
                    system("Pause");
                    system("cls");
                    switch(op6){
                        case 1:
                            printf("\nHAS SELECIONADO - INSERTAR ELEMENTOS\n\n");

                            f=1;
                            while(f==1){
                                InsertarNodo_LD();
                                printf("\nQuieres ingresar otro elemento \n1-Si\n2-NO\n\n ");
                                scanf("%d",&f);

                            }
                                printf("\nTodos los elemntos ingresados coreectamente\n\n");
                            break;
                        case 2:
                            printf("\nHAS SELECIONADO - MOSTRAR ELEMENTOS\n");
                            printf("\nLista del primero al ultimo\n");
                            Mostrar_ListaPU_LD();
                            printf("\n Lista de Ultimo a primero\n");
                            Mostrar_ListaUP_LD();
                            break;
                        case 3:
                            printf("\nHAS SELECIONADO - BUSCAR ELEMENTOS\n");
                            BuscarNodo_LD();

                            break;
                        case 4:
                            printf("\nHAS SELECIONADO - ELIMINAR ELEMENTOS\n");
                            EliminarNodo_LD();
                            break;
                        case 5:
                            printf("\nHAS SELECIONADO - EDITAR ELEMENTOS\n");
                            EditarNodo_LD();
                            break;
                        case 6:
                            printf("\nHAS SELECIONADO - VACIAR ELEMENTOS\n");
                            VaciarLista();
                            break;
                        case 7:
                            printf("\nHAS SELECIONADO - ELIMINAR LISTA\n");

                            break;
                        case 8:
                            printf("\nVOLVIENDO AL MUENU DEL PROYECTO\n");
                            MenuProyecto();
                            break;
                        case 9:
                            printf("\nPROGRAMA FINALIZADO\n");
                            exit(0);

                            break;
                        default:
                            printf("\nOPCION NO VALIDA \n\n");
                            printf("\nVUELVA A INTENTARLO \n\n");
                            break;
                    }
                }while(op6!=9);
                break;
            case 7:
                exit(0);

                break;
        }


    }while(op!=7);


}

//Funciones de lista LIFO

void InsertarNodo(){
    int lista;
    nodo *nuevo=reservar_memoria;
    printf("\nIngrese el dato que contiene el nuevo nodo: \n");
    scanf("%d",&nuevo->dato);
    nuevo->siguiente=inicio;
    inicio=nuevo;
}

void Mostrar_Lista(){
    nodo *actual=reservar_memoria;
    actual=inicio;
    if(actual!=NULL){
        while(actual !=NULL){
            if (actual==inicio){
                printf("\n el primer Elemento de la pila es = %d \n", *actual);
            }
            printf("\n%d", actual->dato);
            actual=actual->siguiente;
        }
    }else{
        printf("\n\n La pila se encuentra vacia\n\n");
    }


}

void BuscarNodo(){
    int nodoBuscado =0, encontrado = 0;
    nodo *actual=reservar_memoria;
    actual=inicio;
    printf("\n\n Ingrese el dato a buscar:\t");
    scanf("%d", &nodoBuscado);
    if(actual!=NULL){
        while(actual !=NULL){
           if(actual->dato == nodoBuscado){
                printf("\n \nEl nodo ha sido encontrado (%d) Encontrado\n\n", nodoBuscado);
                encontrado=1;
           }
            actual=actual->siguiente;
        }
        if(encontrado==0){
            printf("\n \nNodo no encontrado");
        }
    }else{
        printf("\n\n La pila se encuentra vacia");
    }
}

void EliminarNodo(){
    int nodoBuscado =0, encontrado = 0;
    nodo *actual=reservar_memoria;
    actual=inicio;
    nodo *anterior = reservar_memoria;
    anterior=NULL;
    printf("\n Ingrese el dato del Nodo a Buscar para elminar:");
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
    printf("\n Ingrese el dato a buscar para modificar:");
    scanf("%d", &nodoBuscado);
    if(actual!=NULL){
        while(actual !=NULL){
           if(actual->dato == nodoBuscado){
                printf("\n El nodo con el dato (%d) Encontrado\n\n", nodoBuscado);
                printf("\n Ingrese el nuevo dato para este nodo\n");
                scanf("%d",&actual->dato);

                printf("\n Nodo Modificado con exito");
                encontrado=1;
           }
            actual=actual->siguiente;
        }
        if(encontrado==0){
            printf("\n\n Nodo no encontrado");
        }
    }else{
        printf("\n\n La pila se encuentra vacia");
    }
}

void VaciarLista(){


    Nodo *aux=inicio;
    inicio->dato=aux->dato;
    inicio=aux->siguiente;
    free(aux);

    printf("\n\nSe ha Eliminado el primer elemento de la lista ");
}

//Funciones de listas FIFO

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

//Funciones de Lista Circular doble

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

//Funciones de Lista Circular Simple
void InsertarNodo_LCS(){
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

void Mostrar_Lista_LCS(){
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

void BuscarNodo_LCS(){
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

void EditarNodo_LCS(){
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

void EliminarNodo_LCS(){
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

//Funciones de Lista Simple

void InsertarNodo_LS(){
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

void Mostrar_Lista_LS(){
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

void BuscarNodo_LS(){
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

void EditarNodo_LS(){
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

void EliminarNodo_LS(){
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

//Funciones de Lista Doble

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

void EliminarLista(){
    Nodo* aux=inicio;
    inicio->dato=aux->dato;
    inicio=NULL;
    free(aux);

    printf("\n\n Lista Eliminada\n\n");
}
