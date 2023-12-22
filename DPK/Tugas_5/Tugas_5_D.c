#include <stdio.h>
// Nama : Zulfahmi
// NIM : D121231011

int main() {

    int flag,exit_flag; scanf("%d\n", &flag);
    char letter; scanf("%c", &letter);

    if(flag == 1 || letter != 'X')
        exit_flag = 0;
    else 
        exit_flag = 1;
    
    printf("%d\n", exit_flag);

    return 0;
}   