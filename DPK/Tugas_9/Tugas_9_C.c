#include <stdio.h>
#include <string.h>

int main(){

    char kalimat[100];
    gets(kalimat);

    int panjang = strlen(kalimat), jumlah_spasi = 0;

    for(int i = 0; i < panjang; i++)
        if(kalimat[i] == ' ')
            jumlah_spasi++;
    
    printf("%d", jumlah_spasi);

    return 0;
}