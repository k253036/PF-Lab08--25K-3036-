#include <stdio.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%[^\n]", str); // Read string with spaces

    printf("String without numbers: ");
    for (int i = 0; str[i] != '\0'; i++) {
        if (!(str[i] >= '0' && str[i] <= '9'))
            printf("%c", str[i]);
    }
    return 0;
}
