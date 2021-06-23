#include <stdio.h>
#include <stdlib.h>

int another_for_loop(int c_sum, int count, int target, int size, int *ar, int *result) {
    if(!size) return 0;
    for(int i = 0; i < size; i++) {
        c_sum += ar[i];
        result[count] = *(ar + i);
        if(c_sum == target)
            return 1;
        another_for_loop(c_sum, count+1, target, size-1, ar+1, result);
        c_sum -= *(ar + i);
        result[count] = -1;
    }
    return 0;
}

int main() {
    while(1) {
        int target, *array, size, *result;
        printf("Enter array size: ");
        scanf("%d", &size);
        array = malloc(sizeof(int) * size);
        result = malloc(sizeof(int) * size);
        for(int i = 0; i < size; i++) {
            ( *(result + i) ) = -1;
        }
        for(int i = 0; i < size; i++) {
            printf("Enter element %d: ", i);
            scanf("%d", array + i);
        }
        printf("Enter the target sum: ");
        scanf("%d", &target);
        if(another_for_loop(0, 0, target, size, array, result)) {
            printf("The following numbers from the array add up to the target:");
            for(int i = 0; i < size; i++) {
                if( (*(result + i)) != -1 ) {
                    printf(" %d", (*(result + i)));
                }
            }
            printf("\n");
        } else {
            printf("No numbers from the array can add up to the target.\n");
        }
    }
    return 0;
}