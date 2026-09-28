#include <stdio.h>

int main()
{
char str[100];
char highest = '\0', second = '\0';
int i;

printf("Enter string: ");  
scanf("%s", str);  

for(i = 0; str[i] != '\0'; i++)  
{  
    if(str[i] > highest)  
        highest = str[i];  
}  

for(i = 0; str[i] != '\0'; i++)  
{  
    if(str[i] > second && str[i] < highest)  
        second = str[i];  
}  

printf("Second highest alphabet = %c", second);  

return 0;

}