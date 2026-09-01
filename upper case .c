#include <stdio.h>

int main()
{
    char x;

    printf("Enter the character: ");
    scanf("%c", &x);

    if (x >= 'A' && x <= 'Z')
    {
        printf("Given character is in upper case\n");
    }
    else
    {
        printf("Given character is not in upper case\n");
    }

    return 0;
}