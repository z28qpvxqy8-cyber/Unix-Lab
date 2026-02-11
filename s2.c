#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int ab, random;
    double cel, cosine, floatabs, flo, logbase_e, logbase_10, power, expo, sq_root, ncel, nflo;

    ab = abs(-8);
    cel = ceil(45.0001);
    ncel = ceil(-45.0001);
    cosine = cos(30 * 3.14159 / 180);
    expo = exp(1.0);
    floatabs = fabs(-8.432);
    flo = floor(45.99356);
    nflo = floor(-45.99356);
    logbase_e = log(2.71828);
    logbase_10 = log10(100);
    power = pow(0.16, 0.5);
    random = rand();
    sq_root = sqrt(2.25);

    printf("The absolute value of -8 is: %d\n", ab);
    printf("The ceil value of 45.0001 is: %lf\n", cel);
    printf("The ceil value of -45.0001 is: %lf\n", ncel);
    printf("The cos value of degree 30 is: %lf\n", cosine);
    printf("The exponential value of 1 is: %lf\n", expo);
    printf("The absolute value of double -8.432 is: %lf\n", floatabs);
    printf("The floor value of 45.99356 is: %lf\n", flo);
    printf("The floor value of -45.99356 is: %lf\n", nflo);
    printf("The natural log of 2.71828 is: %lf\n", logbase_e);
    printf("The log base 10 of 100 is: %lf\n", logbase_10);
    printf("The value of 0.16^0.5 is: %lf\n", power);
    printf("The random number is: %d\n", random);
    printf("The square root of 2.25 is: %lf\n", sq_root);

    return 0;
}
