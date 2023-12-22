#include <stdio.h>
// Zulfahmi D121231011

int main() {

    char word[5] = {'H', 'E', 'L', 'L', 'O'};

    for(int i = 0; i < 5; i++)
        printf("%c%c", word[i], (i < 4 ? ' ' : '\n'));

    return 0;
}