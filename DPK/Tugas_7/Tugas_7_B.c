#include <stdio.h>
// Zulfahmi D121231011

int main(){

    char huruf[10];
    
    for(int i = 0; i < 10; i++)
        huruf[i] = '?';

    huruf[3] = 'Z';

    for(int i = 0; i < 10; i++)
        printf("%c", huruf[i]);

    return 0;
}