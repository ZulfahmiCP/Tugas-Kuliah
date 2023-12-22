#include <stdio.h>

int funct1(int n){
    if(n <= 0)
        return 0;
    return n + funct1(n - 2);
}

int main() {

    int n = 10;
    // Mengeluarkan nilai dari n + (n - 2) + (n - 4) + ...
    // menggunakan rekursi
    // funct1(n) = 0, jika n <= 0
    // funct1(n) = n + funct1(n - 2), jika n > 0
    printf("%d", funct1(n));
    
    return 0;
}