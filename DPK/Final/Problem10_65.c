#include <stdio.h>

int main() {

    // Sistem dari array x akan tetap sama apapun tipe datanya
    // yang dimana x[i] adalah nilainya begitupun dengan *(x + i)
    // yang merupakan pointer pada x ke - (i - 1).
    // Ini bekerja karena pointer dapat menggunakan operasi aritmatika
    // Dan &x[i] yang merupakan alamat element x ke - (i + 1)
    // begitupun dengan (x + i) yang merupakan alamat dari x[i]

    long int x[10];
    for(int i = 0; i < 10; i++)
        x[i] = i + 10;
    
    for(int i = 0; i < 10; i++){
        printf("i = %d  x[i] = %d         *(x + i) = %d\n", i, x[i], *(x + i));
        printf("       &x[i] = %X    x + i  = %X\n\n", &x[i], (x + i));
    }

    return 0;
}