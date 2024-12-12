#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int main(){
    
    int size;
    
    int checker = 0;
    
    do{
        printf("Enter a number: ");
        scanf("%d", &size);
        
        if(size >= 1 && size <= 40){
            checker = 1;
        }
    }while(checker != 1);
    
    printf("Fibonacci Numbers:\n");
    
    int first = 0; 
    int second = 1;
    int next;

    int count = 0;

    int array[MAX];

    for(int i = 0; i < size; i++){
        array[i] = first;
        next = first + second;
        first = second;
        second = next;
    }
    
    for(int rows = 0; rows < size && count < size; rows++){
        for(int cols = 0; cols < 10 && count < size; cols++){
            printf("%d  ", array[count]);
            count++;
        }
        printf("\n");
    }
    
    if(size % 2 == 0){
        printf("\nMiddle numbers: %d & %d", (array[size/2-1]), (array[size/2]));
    }
    else{
        printf("\nMiddle number: %d", (array[size/2]));
    }
    
    return 0;
}