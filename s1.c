#include <stdio.h>

int main() {
    int a, b, c, max;
    printf("Please Input three Numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if(a > b && a > c)
        max = a;
    else if(b > a && b > c)
        max = b;
    else
        max = c;

    printf("\nThe maximum of %d, %d, %d is = %d\n", a, b, c, max);
    return 0;
}
