#include <stdio.h>
#include <stdlib.h>

int numOfDigits(int n, int digit) {
    if( (n / 10) != 0 ) {
        digit++;
        return numOfDigits(n/10, digit);
    } else {
        return digit;
    }
}

int main() {
    int num;
    while(1) {
        printf("Input a number: ");
        scanf("%d", &num);
        printf("The number of digits in the number is: %d\n", numOfDigits(num, 1));
    }
    return 0;
}