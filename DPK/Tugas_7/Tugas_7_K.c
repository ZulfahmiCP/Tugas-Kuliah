#include <stdio.h>
// Zulfahmi D121231011

int main() {

    char word[5];

    for(int i = 0; i < 5; i++)
        scanf("%c", &word[i]);
    for(int i = 0; i < 5; i++)
        printf("%c", word[i]);

    return 0;
}