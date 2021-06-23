#include <stdio.h>
#include <stdlib.h>

int fib_number(int n1, int n2, int n3) {
    if(n3 == 1) {
        return n1;
    }
    int temp = n2;
    n2 = (n1 + n2);
    n1 = temp;
    return fib_number(n1, n2, n3 - 1);
}

int main() {
    int num;
    while(1) {
        printf("Enter a number: ");
        scanf("%d", &num);
        printf("%d is the number in the fibonacci sequence: %d\n", fib_number(1, 1, num));
    }
    return 0;
}