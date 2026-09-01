#include <stdio.h>

int main() {
    int n, i;
    int fact=1;
    printf("Enter an integer: ");
    scanf("%d", &n);

     if (n<0)
     {
     printf("entre positive number");
     }
     else
    {
     for(i=1;i<=n;i++)
    fact*=i;
     }
     printf("factorial of given numberis %d",fact);
     }