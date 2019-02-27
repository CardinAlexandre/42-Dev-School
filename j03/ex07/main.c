#include <stdio.h>
#include <string.h>

char	*ft_strrev(char *str);

void	test_01(void)
{
	char str[] = "Test";

	printf("d03 ex07 test_01 -- ");
	printf("Input: \"%s\", ", str);
	printf("Output: \"%s\", ", ft_strrev(str));
	printf("Expected: \"%s\"\n", "tseT");
}

void	test_02(void)
{
	char str[] = "";

	printf("d03 ex07 test_01 -- ");
	printf("Input: \"%s\", ", str);
	printf("Output: \"%s\", ", ft_strrev(str));
	printf("Expected: \"%s\"\n", "");
}

int		main(void)
{
	test_01();
	test_02();
	return (0);
}