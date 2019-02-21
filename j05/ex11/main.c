#include <stdio.h>
#include <unistd.h>
 
int ft_str_is_alpha(char *str);
 
void ft_putchar(char c)
{
    write(1, &c, 1);
}
 
int main()
{
    char str[] = "ABCDEFIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    char str2[] = "ABCDE@";
    printf("Expected : 1, result = %d\n", ft_str_is_alpha(str));
    printf("Expected : 0, result = %d\n", ft_str_is_alpha(str2));
}