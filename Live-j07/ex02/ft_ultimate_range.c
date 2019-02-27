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

int ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int *tab;

	i = 0;
	tab = (int*)malloc(sizeof(int) * (max - min));
	while (min < max)
	{
		tab[i] = min;
		min++;
		i++;
	}
	*range = tab;
	return (i);
	if (min >= max)
		*range = NULL;
		return (0);
}

void	ft_print(int *range, int size)
{
	int		i;

	i = 0;
	printf("{ ");
	while (i < size)
	{
		printf("%d ", range[i]);
		i++;
	}
	printf("}\n");
}

int		main(int argc, char **argv)
{
	int		**range;
	int		min;
	int		max;

	range = (int**)malloc(sizeof(int*));

	if (argc != 3)
		printf("Usage: ./a.out [min] [max]\n");
	else
	{
		min = atoi(argv[1]);
		max = atoi(argv[2]);
		int r = ft_ultimate_range(range, min, max);
		printf("Size = %d\n", r);
		ft_print(*range, max - min);
	}
	return (0);
}