#include <stdio.h>

int ispalindrome(int num);

int main()
{
    int num;

    printf("Enter the no: ");
    scanf("%d", &num);

    if (ispalindrome(num))
    {
        printf("%d is a palindrome number\n", num);
    }
    else
    {
        printf("%d is not a palindrome number\n", num);
    }

    return 0;
}

int ispalindrome(int num)
{
    int original = num;
    int reverse = 0;
    int rem;

    while (num != 0)
    {
        rem = num % 10;
        reverse = reverse * 10 + rem;
        num = num / 10;
    }

    if (original == reverse)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}