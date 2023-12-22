#include <stdio.h>
// Nama : Zulfahmi
// NIM : D121231011

int main() {

    int triangular = 0, n;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
        triangular += i;
    
    printf("%d\n", triangular);

    return 0;
}