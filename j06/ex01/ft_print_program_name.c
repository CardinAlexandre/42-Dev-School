#include <unistd.h>

void ft_putchar(char c);

int main(int argc, char **argv)
{
	int i;

	(void)argc;
	i = 0;
	while(argv[0][i])
	{
		ft_putchar(argv[0][i]);
		i++;
	}
	ft_putchar('\n');
	return (0);
}