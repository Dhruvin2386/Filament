#include <stdio.h>

int main() {
    char str[100], result[100];
    int j = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n') {
            result[j] = str[i];
            j++;
        }
    }
    result[j] = '\0';

    printf("String after removing spaces: %s\n", result);

    return 0;
}
