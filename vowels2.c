#include <stdio.h>

int main()
{
    char letter;

    printf("enter a letter: ");
    scanf(" %c", &letter);

    if ((letter >= 'A' && letter <= 'Z') ||
        (letter >= 'a' && letter <= 'z'))
    {
        switch (letter)
        {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                printf("it is a vowel");
                break;

            default:
                printf("it is a consonant");
        }
    }
    else
    {
        printf("it is not a letter");
    }

    return 0;
}