#include <stdio.h>
#include <string.h>

int main() {
    char string[100];
    int i, count = 0;
    
    printf("Enter a string: ");
    gets(string);
    
    for (i = 0; i < strlen(string); i++) {
        if (!(string[i] >= '0' && string[i] <= '9') &&
            !(string[i] >= 'a' && string[i] <= 'z') &&
            !(string[i] >= 'A' && string[i] <= 'Z')) {
            count++;
        }
    }
    
    printf("Number of special characters: %d\n", count);
    return 0;
}
