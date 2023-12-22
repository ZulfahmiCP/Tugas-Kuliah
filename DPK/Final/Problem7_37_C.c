#include <stdio.h>

int funct1(int n){
    if(n <= 0)
        return 0;
    return n + funct1(n - 1);
}

int main() {

    int n = 10;
    // Mengeluarkan nilai dari n + ... + 2 + 1
    // menggunakan rekursi, yang dimana 
    // funct1(n) = 0, jika n <= 0;
    // funct1(n) = n + funct1(n - 1), jika n > 0
    printf("%d", funct1(n));

    return 0;
}