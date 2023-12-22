#include <stdio.h>
// Zulfahmi D121231011

int main() {

    float Arr[3][5], jumlah = 0;

    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 5; j++){
            scanf("%f", &Arr[i][j]);

            jumlah += Arr[i][j];
        }   

    printf("%.5f", jumlah);

    return 0;
}