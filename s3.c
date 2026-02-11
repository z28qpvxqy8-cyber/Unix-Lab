#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159

int main(void) {
    double radius, area, circum;
    FILE *inp, *outp;

    inp = fopen("circle.dat", "r");
    if(inp == NULL) {
        printf("Not able to open input file");
        exit(1);
    }

    outp = fopen("circle.out", "w");

    fscanf(inp, "%lf", &radius);
    
    area = PI * radius * radius;
    circum = 2 * PI * radius;

    fprintf(outp, "The radius is %.2f\n", radius);
    fprintf(outp, "The area is %.2f\n", area);
    fprintf(outp, "The circumference is %.2f\n", circum);

    fclose(inp);
    fclose(outp);
    return (0);
}
