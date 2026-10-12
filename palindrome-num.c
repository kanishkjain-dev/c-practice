#include <stdio.h>
#include <string.h>

int main(void)
{
    char num[30];

    printf("enter a num: ");
    scanf("%s", num);

    int len = strlen(num);
    int palindrome = 1;

    for (int i = 0; i < len / 2; i++)
    {
        if (num[i] != num[len - 1 - i])
        {
            palindrome = 0;
            break;
        }
    }

    if (palindrome == 1)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not a palindrome");
    }
}