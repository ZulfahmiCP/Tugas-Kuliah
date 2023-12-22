#include <stdio.h>
// Zulfahmi D121231011

int main() {

    char word[100];

    int cur = 0;
    while((word[cur] = getchar()) != '\n')
        cur++;
    for(int i = 0; i < cur; i++)
        printf("%c", word[i]);

    return 0;
}