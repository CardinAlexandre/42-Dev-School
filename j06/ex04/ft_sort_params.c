#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str++);
	}
}

int main(int argc, char **argv)
{
	{
		char *temp; 
		int i;
		int j;
		while (i == 0 && i < argc)
		i++;
			while (j == 0 && j < argc)
			j++;
				if (strcmp(argv[i], argv[j]) < 0)
				{
					temp = argv[i];
					argv[i] = argv[j];
					argv[j] = temp;
				}
	}
    return (0);
}