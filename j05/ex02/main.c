#include <stdio.h>
#include <stdlib.h>

int ft_atoi(char *str);

int main()
{
	char str[] = "+42";
	printf("Input: \"%s\", ", str);
	printf("Output: %d, ", ft_atoi(str));
	printf("Expected: %d\n", atoi(str));
	return (0);
}
