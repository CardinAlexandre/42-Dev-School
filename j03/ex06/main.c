#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str);

int	main(void)
{
	char str[] = "Test";

	printf("d03 ex06 test_01 -- ");
	printf("Input: \"%s\", ", str);
	printf("Output: %d, ", ft_strlen(str));
	printf("Expected: %lu\n", strlen(str));
}