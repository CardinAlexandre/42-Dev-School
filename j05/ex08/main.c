#include <string.h>
#include <stdio.h>
#include <unistd.h>

char *ft_strupcase(char *str);

void test1(void)
{
	printf("test 1\n");
	char str[] = "alexandre";
	printf("input : %s\n", str);
	printf("output : %s\n", ft_strupcase(str));
	printf("Expected : ALEXANDRE\n\n");
}

void test2(void)
{
	printf("test 2\n");
	char str[] = "heisenberg";
	printf("input : %s\n", str);
	printf("output : %s\n", ft_strupcase(str));
	printf("Expected : HEISENBERG\n\n");
}

void test3(void)
{
	printf("test 3\n");
	char str[] = "42";
	printf("input : %s\n", str);
	printf("output : %s\n", ft_strupcase(str));
	printf("Expected : 42\n\n");
}


int main()
{
	test1();
	test2();
	test3();
	return (0);
}