#include <string.h>
#include <stdio.h>
#include <unistd.h>

int ft_str_is_printable(char *str);

void ft_putchar(char c)
{
    write(1, &c, 1);
}
 
int main()
{
	char str[] = "Je suis en maillot à la piscine";
	char str2[] = "HEISENBERG";
	printf("str return : %d\n", ft_str_is_printable(str));
	printf("str2 return : %d\n", ft_str_is_printable(str2));
}