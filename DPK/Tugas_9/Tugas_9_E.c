#include <stdio.h>
#include <string.h>

int main(){

    char kalimat[100];
    gets(kalimat);

    int panjang = strlen(kalimat);

    for(int i = 0, j = panjang - 1; i < j; i++, j--)
        if(kalimat[i] != kalimat[j]){
            printf("Bukan PALINDROM\n");
            return 0;
        }

    printf("Termasuk PALINDROM\n");

    return 0;
}