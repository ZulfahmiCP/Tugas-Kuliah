#include <stdio.h>
// Nama : Zulfahmi
// NIM : D121231011

int main() {

    int i = 1;

    while(i <= 5){
        int j = 1;
        while(j <= i){
            printf("%d", i);
            j++;
        }

        i++;
        printf("\n");
    }

    return 0;
}