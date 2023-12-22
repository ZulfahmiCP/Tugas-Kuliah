#include <stdio.h>
#include <string.h>
// Zulfahmi D121231011

int main() {

    char word[50];

    scanf("%s", &word);

    for(int i = 0; i < strlen(word); i++)
        printf("%c", word[i]);
    printf("\n");

    return 0;
}