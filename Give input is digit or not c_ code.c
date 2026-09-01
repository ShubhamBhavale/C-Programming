#include <stdio.h>

int main()
{
    int x;

    printf("Enter the character: ");
    scanf("%d", &x);

    if (x >= 0 && x <= 9)
    {
        printf("Given character is digit \n");
    }
    else
    {
        printf("Given character is not digit\n");
    }

    return 0;
}