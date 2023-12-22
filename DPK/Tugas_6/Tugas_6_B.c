#include <stdio.h>
// Nama : Zulfahmi
// NIM : D121231011

int main() {

    for(int i = 1; i <= 5; i++){
        for(int j = 1; j <= i; j++)
            printf("%d", i);
        printf("\n");
    }

    return 0;
}