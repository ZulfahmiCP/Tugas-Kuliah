#include <stdio.h>

int n;
float sum = 0, d, avg, list[10000], deviation[1000]; 

void read_array() {
    for(int i = 0; i < n; i++){
        printf("i = %d x = ", i + 1);
        scanf("%f", &list[i]);
        sum += list[i];
    }
}

void calculated_deviation() {
    for(int i = 0; i < n; i++)
        deviation[i] = list[i] - avg;
}

int main() {

    printf("\nHow many numbers will be averaged? ");
    scanf("%d", &n);
    read_array();
    avg = sum / n;

    printf("\nThe average is %5.2f\n\n", avg);

    calculated_deviation();
    for(int i = 0; i < n; i++)
        printf("i = %d, x = %5.2f, d = %5.2f\n", i + 1, list[i], deviation[i]);

    return 0;
}