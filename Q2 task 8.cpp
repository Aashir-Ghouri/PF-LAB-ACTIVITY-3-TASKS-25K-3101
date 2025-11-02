#include <stdio.h>

int main() {
    char str[1000];

    printf("Enter a string: ");
    if (scanf("%[^A-Za-z]", str) == 1)
        printf("Non-alphabetic part: %s\n", str);
    else
        printf("No non-alphabetic characters at the start!\n");

    return 0;
}

