#include <stdio.h>
#include <string.h>

int main(){

    char kalimat[100];
    gets(kalimat);

    int huruf_kecil = 0, huruf_kapital = 0, simbol = 0;
    for(int i = 0; i < strlen(kalimat); i++)
        if('a' <= kalimat[i] && kalimat[i] <= 'z')
            huruf_kecil++;
        else if('A' <= kalimat[i] && kalimat[i] <= 'Z')
            huruf_kapital++;
        else 
            simbol++;
    
    printf("[Huruf Kecil, Huruf Kapital, Simbol] = [%d, %d, %d]", huruf_kecil, huruf_kapital, simbol);

    return 0;
}