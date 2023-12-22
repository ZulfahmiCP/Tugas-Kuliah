#include <stdio.h>

int funct1(int x){
    return x * x;
}

int main() {

    // Program ini akan mengeluarkan 5 bilangan 
    // kuadrat pertama
    for(int count = 1; count <= 5; count++)
        printf("%d ", funct1(count));

    return 0;
}