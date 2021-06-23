#include <stdio.h>
#include <stdlib.h>

int gcd(int n1, int n2, int GCD, int count) {
    if(n1 < 0) {
        n1 *= -1;
    }
    if(n2 < 0) {
        n2 *= -1;
    }
    if( (n1 % count == 0) && (n2 % count == 0) ) {
        return gcd(n1, n2, count, count + 1);
    } else if( (count != n1) && (count != n2) ) {
        return gcd(n1, n2, GCD, count + 1);
    } else {
        return GCD;
    }
}

int main() {
    int num1, num2;
    while(1) {
        printf("Enter 2 numbers: ");
        scanf("%d", &num1);
        scanf("%d", &num2);
        printf("The GCD of %d and %d: %d\n", num1, num2, gcd(num1, num2, 1, 1));
    }
    return 0;
}