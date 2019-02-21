#include <stdio.h>
#include <string.h>

int match(char *s1, char *s2);

void test1(void)
{
	printf("test 1:\n");
	char *s1 = "";
	char *s2 = "*";
	printf("s1 : %s\n", s1);
	printf("s2 : %s\n", s2);
	printf ("1 ca match, 0 ca match pas : %d\n", match(s1, s2));
	printf("Expected : 1\n\n");
}

void test2(void)
{
	printf("test 2:\n");
	char *s1 = "main.c";
	char *s2 = "*.c";
	printf("s1 : %s\n", s1);
	printf("s2 : %s\n", s2);
	printf ("1 ca match, 0 ca match pas : %d\n", match(s1, s2));
	printf("Expected : 1\n\n");
}

void test3(void)
{
	printf("test 3:\n");
	char *s1 = "****";
	char *s2 = "*";
	printf("s1 : %s\n", s1);
	printf("s2 : %s\n", s2);
	printf ("1 ca match, 0 ca match pas : %d\n", match(s1, s2));
	printf("Expected : 1\n\n");
}

void test4(void)
{
	printf("test 4:\n");
	char *s1 = "Anticonstitutionellement";
	char *s2 = "*constitution*";
	printf("s1 : %s\n", s1);
	printf("s2 : %s\n", s2);
	printf ("1 ca match, 0 ca match pas : %d\n", match(s1, s2));
	printf("Expected : 1\n\n");
}

void test5(void)
{
	printf("test 5:\n");
	char *s1 = "main.c";
	char *s2 = "m*ain.c";
	printf("s1 : %s\n", s1);
	printf("s2 : %s\n", s2);
	printf ("1 ca match, 0 ca match pas : %d\n", match(s1, s2));
	printf("Expected : 0\n\n");
}


int main()
{
	test1();
	test2();
	test3();
	test4();
	test5();
	return (0);
}
