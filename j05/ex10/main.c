#include <stdio.h>
#include <string.h>
#include <unistd.h>

char *ft_strcapitalize(char *str);

void test1(void)
{
	printf("test 1\n");
	char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("input : %s\n", str);
	printf("output : %s\n", ft_strcapitalize(str));
	printf("Expected : Salut, Comment Tu Vas ? 42mots Quarante-Deux; Cinquante+Et+Un\n\n");
}

int main()
{
	test1();
	return (0);
}