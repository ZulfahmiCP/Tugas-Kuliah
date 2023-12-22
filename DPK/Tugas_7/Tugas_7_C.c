#include <stdio.h>
// Zulfahmi D121231011

int main() {

    int Arr[5], jumlah = 0;

    for(int i = 0; i < 5; i++){
        scanf("%d", &Arr[i]);

        jumlah += Arr[i];
    }

    printf("%d\n", jumlah);

    return 0;
}