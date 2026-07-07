#include <stdio.h>
#include <stdlib.h>

int main(){
    int size, *x, value, i;

    printf("What size do you want the array to be? ");
    scanf("%d", &size);

    x = malloc(size * sizeof(int));

    if(x){
        printf("\nWhich value do you want: \n");
        for(i = 0; i<size; i++){

            scanf("%d", &value);
            *(x + i) = value;
        }
        for(i = 0; i < size; i++){
            printf("%d", *(x+i));
        }
        
        free(x);
        x = NULL;

        for(i = 0; i < size; i++){
            printf("%d", *(x+i));
        }
    } 
    else{
        printf("Memory allocation failed!\n");
    }

    return 0;
}