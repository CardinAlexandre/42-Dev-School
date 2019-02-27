#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

// void	ft_putchar(char c)
// {
// 	write(1, &c, 1);
// }

// void	ft_putstr(char *str)
// {
// 	while (*str)
// 		ft_putchar(*str++);
// }

int *ft_range(int min, int max)
 {
 	int i;
 	int *tab;

 	i = 0;
 	tab = (int*)malloc(sizeof(*tab) * (max - min));
 	if (min >= max)
 		return (NULL);
 	while (min < max)
 	{
 		tab[i] = min;
 		min++;
 		i++;
 	}
 	return (tab);
 }

int		main(int argc, char **argv)
{
	int		i;
	int		*range;
	int		min;
	int		max;

	if (argc != 3)
		printf("Usage: ./a.out [min] [max]\n");
	else
	{
		min = atoi(argv[1]);
		max = atoi(argv[2]);
		printf("min=%d, max=%d, range= ", min, max);
		range = ft_range(min, max);
		i = -1;
		while (++i < max - min)
		{
			printf("%d", range[i]);
			if (i < max - min -1)
				printf(", ");
		}
		if (min >= max)
			printf("(null)\n");
	}
	return (0);
}