#include <stdio.h>
#include <stdlib.h>

void printArray(int *arr, int start) {
    if( start != 0 ) {
        printArray(arr, start - 1);
    }
    
    printf(" %d", *(arr + start));
}

int main() {
    int num, size, *arr
    while(1) {
        printf("Enter number of elements in array: ");
        scanf("%d", &size);
        arr = malloc(size*(sizeof(int)));
        for(int i = 0; i < size; i++) {
            printf("Enter element %d: ", i);
            scanf("%d", arr + i);
        }
        printf("Elements are: ");
        AprintArray(arr, size, 0);
        printArray(arr, size-1);
        printf("\n");
        free(arr);
    }
    return 0;
}