#include <stdio.h>
#include <stdlib.h>

//void swap(int *prt1, int *ptr2);

//int main(){
//    int var1 = 1;
//    int var2 = 2;
//    int *ptr1,*ptr2;
//    ptr1 = &var1;
//    ptr2 = &var2;

//    printf("Valores antes de serem trocados \n");
//    printf("Var 1 = %d", var1);
//    printf("\nVar 2 = %d", var2);
//    swap(ptr1, ptr2);
//    printf("\nValores depois de serem trocados \n");
//    printf("Var 1 = %d", var1);
//    printf("\nVar 2 = %d", var2);
//}

//void swap(int *ptr1, int *ptr2){
//    int cache = *ptr1;
//    *ptr1 = *ptr2;
//    *ptr2 = cache;
//}

int main(){
    
    int numeros[5] = {10, 20, 30, 40, 50};
    int *ptr = numeros;
    int *fim = numeros + 5;
    while(ptr != fim){
        printf("%d\n", *ptr);
        ptr++;
    }
}