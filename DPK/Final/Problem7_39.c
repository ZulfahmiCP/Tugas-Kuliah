#include <stdio.h>
#include <math.h>

void display_root(float a, float b, float c){
    float d = sqrt(b * b - 4 * a * c);

    float x1 = (b + d) / (2 * a);
    float x2 = (b - d) / (2 * a);

    printf("The root of the equation %.0fx^2 + %.0fx + %.0f ", a, b, c);
    printf("is %0.f and %0.f\n", x1, x2);
}

int main() {

    float a, b, c;
    scanf("%f%f%f", &a, &b, &c);
    display_root(a, b, c);

    return 0;
}