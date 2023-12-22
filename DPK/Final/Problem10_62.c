#include <stdio.h>

void funct1(char kalimat[]){
    kalimat = "green";
    printf("Within funct1         : %s\n", kalimat);
}

int main() {

    char kalimat[] = "red";
    printf("Before calling funct1 : %s\n", kalimat);

    funct1(kalimat);
    printf("After calling funct1  : %s\n", kalimat);

    // Karena char kalimat[] pada funct1 bukanlah sebuah pointer
    // maka char kalimat[] pada funct1 adalah char kalimat[] yang berbeda dengan main.

    return 0;
}