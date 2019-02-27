#include <stdio.h>

void	ft_ft(int *nbr);

void	test_01(void)
{
	int nbr;

	printf("d03 ex00 test_01 -- ");
	nbr = 0;
	ft_ft(&nbr);
	printf("Before: %d, ", 0);
	printf("After:  %d, ", nbr);
	printf("Expected: %d\n", 42);
}

int		main(void)
{
	test_01();
	return (0);
}