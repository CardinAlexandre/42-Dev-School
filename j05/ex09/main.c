#include <string.h>
#include <stdio.h>
#include <unistd.h>

char *ft_strlowcase(char *str);

void test1(void)
{
	printf("test 1\n");
	char str[] = "ALEXANDRE";
	printf("input : %s\n", str);
	printf("output : %s\n", ft_strlowcase(str));
	printf("Expected : alexandre\n\n");
}

void test2(void)
{
	printf("test 2\n");
	char str[] = "HEISENBERG";
	printf("input : %s\n", str);
	printf("output : %s\n", ft_strlowcase(str));
	printf("Expected : heisenberg\n\n");
}

void test3(void)
{
	printf("test 3\n");
	char str[] = "42";
	printf("input : %s\n", str);
	printf("output : %s\n", ft_strlowcase(str));
	printf("Expected : 42\n\n");
}


int main()
{
	test1();
	test2();
	test3();
	return (0);
}