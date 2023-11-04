#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int i, max = 0, letters[26], z = int('a'), max_index;
    char voc[50];
    scanf("%s", &voc);
    for (i=0; i<26; i++) {
        letters[i] = 0;
    }
    for (i=0; i<strlen(voc); i++) {
        letters[int(voc[i])-z]++;
    }
    for (i=0; i<26; i++) {
        if (letters[i] > max) {
            max = letters[i];
            max_index = i;
        }
    }
    printf("%c\n%d\n", char(max_index + z), max);
}