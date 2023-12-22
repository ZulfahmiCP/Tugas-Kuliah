#include <stdio.h>
// Zulfahmi D121231011

int main() {

    float Arr[3][5];

    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 5; j++)
            scanf("%f", &Arr[i][j]);
    
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 5; j++)
            printf("%.3f%c", Arr[i][j], (j < 4 ? ' ' : '\n'));

    return 0;
}