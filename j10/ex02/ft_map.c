#include <stdlib.h>

int	*ft_map(int *tab, int length, int(*f)(int))
{
	int	*mytab;
	int	i;

	i = 0;
	mytab = (int*)malloc(sizeof(*tab) * length);
	while (i < length)
	{
		mytab[i] = f(tab[i]);
		i++;
	}
	return (mytab);
}