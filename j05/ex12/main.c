#include <string.h>
#include <stdio.h>
#include <unistd.h>

int ft_str_is_numeric(char *str);

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int main()
{
	char str[] = "1234567890";
	char str2[] = "2019e";
	printf("expected : %d\n", ft_str_is_numeric(str));
	printf("expected : %d\n", ft_str_is_numeric(str2));
}