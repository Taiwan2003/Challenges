#include <stdio.h>
#include <stdlib.h>

typedef struct No{
    int age;
    struct No *prox;
}No;

// Essa função insere um novo nó no inicio da lista
void StartInsert (No **list, int age) {

    No *novo = (No*) malloc(sizeof(No));

    if(novo){
        novo->age = age;
        novo->prox = *list;
        *list = novo;
    }
    else {
        printf("Memory allocation failed!\n");
    }
}

// Essa função insere um nó no fim da lista
void EndInsert (No **list, int age){

    No *aux, *novo = (No*) malloc(sizeof(No));
    
    if (novo){
        novo->age = age;
        novo->prox = NULL;
        
        if(*list){
            aux = *list;
            while(aux -> prox){
                aux = aux -> prox;
            }
            aux -> prox = novo;

        } else {
            *list = novo;
        }

    }   
}

// Essa é uma função que imprime toda a lista de forma recursiva
void PrintList (No *list){
    
    if (list != NULL){

        printf("%d\n", list -> age);
        PrintList(list -> prox);
    }
    
}

// Essa função cria uma lista de acordo com a quantidade de nó que o usuario quer
void CreatLinkedList (No **start){

    int n, dec;

    printf("1 - Insert at the beginning\n");
    printf("2 - Insert at the end\n");
    scanf("%d", &dec);
    printf("Wich the length the Linked List!\n");
    scanf("%d", &n);

    if(dec == 1){

        for(int i = 0; i < n; i++){
            int num;
            scanf("%d", &num);
            StartInsert(start, num);
        }

    } else if(dec == 2){

        for(int i = 0; i < n; i++){
            int num;
            scanf("%d", &num);
            EndInsert(start, num);
        }

    } else {
        printf("Err!\n");
    }
}

int main(){
    No *start = NULL;

    CreatLinkedList(&start);
    PrintList(start);
}