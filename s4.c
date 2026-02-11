#include <stdio.h>

int main() {
    int x, i;
    long double fact = 1;

    printf("Enter a number to find factorial: ");
    scanf("%d", &x);

    if (x < 0)
        printf("Factorial of negative number doesn't exist.");
    else {
        for (i = 1; i <= x; ++i) {
            fact *= i;
        }
        printf("The Factorial of %d is %Lf\n", x, fact);
    }

    return 0;
}
