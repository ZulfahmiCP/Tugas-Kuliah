#include <stdio.h>
#include <math.h>

float formula(float x){
    float y;
    y = 3 * x - 1;
    return y;
}

void display(int a, int b){
    int c;
    c = sqrt(a * a + b * b);
    printf("c = %i\n", c);
}

int main() {

    float x; scanf("%f", &x);
    printf("Hasil dari 3 * %.0f - 1 adalah %.0f\n", x, formula(x));

    int a, b; scanf("%d%d", &a, &b);
    printf("Hipotenusa dari segitiga dengan sisi %d dan %d adalah ", a, b);
    display(a, b);

    return 0;
}