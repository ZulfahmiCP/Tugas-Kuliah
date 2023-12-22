#include <stdio.h>
#include <string.h>

int main(){

    char nama[100];
    gets(nama);

    int panjang_nama = strlen(nama);

    for(int i = 0, j = panjang_nama - 1; i < j; i++, j--){
        char temporary = nama[i];
        nama[i] = nama[j];
        nama[j] = temporary;
    }

    for(int i = 0; i < panjang_nama; i++)
        nama[i] += 32;
    
    puts(nama);

    return 0;
}