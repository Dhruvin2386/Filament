#include <stdio.h>

int main()
{
    char str[100];
    int wordCount = 0;
    int inWord = 0;

    printf("Enter a string: ");
    scanf("%[^\n]%*c", str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
        {
            inWord = 0;
        }
        else if (inWord == 0)
        {
            inWord = 1;
            wordCount++;
        }
    }

    printf("Total number of words: %d\n", wordCount);

    return 0;
}
