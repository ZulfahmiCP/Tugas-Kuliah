#include <stdio.h>
// Nama : Zulfahmi
// NIM : D121231011

int main() {

    int sum,valid_flag;
    char letter; scanf("%c", &letter);

    switch(letter){
        case 'X' : 
            sum = 0;
            break;
        case 'Z' : 
            valid_flag = 1;
            break;
        case 'A' : 
            sum = 1;
            break;
        default : 
            printf("Unknown letter --> %c\n", letter);
            break;
    } 

    return 0;
}