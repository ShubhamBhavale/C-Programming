#include <stdio.h>

int main()
{
    char x;

    printf("Enter the character: ");
    scanf("%c", &x);

    if (x >= 'a' && x <= 'z')
    {
        printf("Given character is in lowercase\n");
    }
    else
    {
        printf("Given character is not in lowercase\n");
    }

    return 0;
}