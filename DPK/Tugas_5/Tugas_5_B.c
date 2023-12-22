#include <stdio.h>
// Nama : Zulfahmi
// NIM : D121231011

int main() {

    int total,tebak;
    scanf("%d%d", &total, &tebak);

    if(total == tebak)
        printf("%d\n", total);
    else
        printf("%d\n", tebak);

    return 0;
}