#include <stdio.h>
#include <string.h>
 
char *ft_strncat(char *dest, char *src, int nb);
 
int main()
{
    char dest[256] = "You know my name, say it !\n";
    char src[] = "You are Heisenberg 💎 🙇";
    int len = 40;
    printf("Walter white = %s\n", ft_strncat(dest, src, len));
}