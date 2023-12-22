#include <stdio.h>
// Nama : Zulfahmi 
// NIM : D121231011

int main() {

    int total;
    printf("%d\n", total);

    for(int i = 10; i <= 100; i++){
        printf("%d\n", i);
        total += i;
        printf("%d, %d\n", i, total);
    }
    
    printf("%d\n", total);

    return 0;
}