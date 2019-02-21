#include <string.h>
#include <stdio.h>
#include <unistd.h>

int ft_str_is_uppercase(char *str);

void ft_putchar(char c)
{
    write(1, &c, 1);
}
 
int main()
{
	char str[] = "alexandre";
	char str2[] = "HEISENBERG";
	printf("str return : %d\n", ft_str_is_uppercase(str));
	printf("str2 return : %d\n", ft_str_is_uppercase(str2));
}