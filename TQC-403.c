#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    int index = 0;
    char str[100];
    scanf("%s", &str);
    
    while (str[index] != '\0') {
        
        if ((str[index] >= 'A') && (str[index] <= 'Z')) {
            str[index] = tolower(str[index]);
        } else if ((str[index] >= 'a') && (str[index] <= 'z')) {
            str[index] = toupper(str[index]);
        }
        
        printf("%c", str[index]);
        index++;
    }
    
    printf("\n");
}