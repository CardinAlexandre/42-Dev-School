#include<stdio.h>
#include<string.h>

char *ft_strcat(char *dest, char *src);

int main()
{
    char dest[40] = "Walter ";
    char src[] = "White";
    printf("result : %s\n",ft_strcat(dest,src));
    printf("Excpected : Walter White\n");
    return (0);
}