#include <unistd.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);

int main(void)
{
	char str[] = "42";
	ft_putstr(str);
}
