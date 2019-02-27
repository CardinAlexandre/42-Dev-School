#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

void		test_01(void)
{
	int a;
	int b;
	int div;
	int mod;

	printf("d03 ex03 test_01 -- ");
	a = 28;
	b = 5;
	div = 0;
	mod = 0;
	ft_div_mod(a, b, &div, &mod);
	printf("Input: a = %d; b = %d, ", 28, 5);
	printf("Output: div = %d; mod = %d, ", div, mod);
	printf("Expected: div = %d; mod = %d\n", 5, 3);
}

int		main(void)
{
	test_01();
	return (0);
}