#include <stdio.h>
#include <stdlib.h>

int sum(int n) {
    if(n == 1) {
        return 1;
    }
    return n + sum(n - 1);
}

int main() {
    int n;
    while(1) {
        printf("Enter number: ");
        scanf("%d", &n);
        printf("Sum from 1 to %d is: %d\n", n, sum(n));
    }
    return 0;
}