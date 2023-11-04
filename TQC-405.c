#include <string.h>
#include <stdio.h>

int main() {
    FILE * input;
    char word[100];
    int num[3], i, z = int('0');
    for (i=0; i<3; i++) {
        scanf("%d", &num[i]);
    }
    input = fopen("read.txt", "r+");
    for (i=0; !feof(input); i++) {
        if (fgets(word, sizeof(word), input) != NULL) {
            memset(word, char(num[i] + z), num[i]);
            printf(word);
        }
    }
    fclose(input);
}