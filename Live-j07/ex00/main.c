#include <stdio.h>
#include <string.h>

char	*ft_strdup(char *src);

void	test_01(void)
{
	char	str[] = "Bonjour";

	printf("d07 ex00 test_01 -- ");
	printf("Input: \"%s\", ", str);
	printf("Output: \"%s\", ", ft_strdup(str));
	printf("expected: \"%s\"\n", strdup(str));
}

int		main(void)
{
	test_01();
	return (0);
}