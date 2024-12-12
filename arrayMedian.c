#include <stdio.h>
#define MAX 100

void arrayMedian(int*, int);

int main(){
    
    int size;
    
    printf("Enter array size: ");
    scanf("%d", &size);
    
    int array[MAX];
    
    int* ptrArray = array;
    
    printf("Enter elements of the array:\n");
    
    int counter = 0;
    
    int i = 0;
    
    while(i < size){
        printf("[%d] = ", counter);
        scanf("%d", ptrArray + i);
        counter++;
        i++;
    }
    
    arrayMedian(ptrArray, size);
    
    return 0;
}

void arrayMedian(int* ptrArray, int size){
    
    if(size % 2 != 0){
        printf("\nMedian: %d", ptrArray[size/2]);
    }
    else{
        printf("\nMedians: %d and %d", ptrArray[size/2-1], ptrArray[size/2]);
    }
    
}