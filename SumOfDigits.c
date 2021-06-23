#include <stdio.h>
#include <stdlib.h>

int digitSum(int n, int currentSum) {
    if(n != 0){
        currentSum += (n % 10);
        return digitSum(n/10, currentSum);
    }
    return currentSum;
}

int main() {
    int num;
    while(1) {
       printf("Input a number: ");
       scanf("%d", &num);
       printf("The sum of the digits is: %d\n", digitSum(num, 0));
    }
    return 0;
}