#include <stdio.h>
#include <string.h>
 
char *ft_strstr(char *str, char *to_find);
 
void test1(void)
{
    char str[] = "TutorialsPoint";
    char to_find[] = "Point";
    char *ret;

    printf("str : %s\n",str);
    printf("to_find : %s\n",to_find);

    ret = strstr(str, to_find);

    printf("The substring is: %s\n", ret);
}

void test2(void)
{
    char str[] = "Anticonstitutionellement";
    char to_find[] = "constitution";
    char *ret;

    printf("str : %s\n",str);
    printf("to_find : %s\n",to_find);

    ret = strstr(str, to_find);

    printf("The substring is: %s\n", ret);
}

void test3(void)
{
    char str[] = "abcde";
    char to_find[] = "cde";
    char *ret;

    printf("str : %s\n",str);
    printf("to_find : %s\n",to_find);

    ret = strstr(str, to_find);

    printf("The substring is: %s\n", ret);
}

void test4(void)
{
    char str[] = "aaaaaaaaaaab";
    char to_find[] = "b";
    char *ret;

    printf("str : %s\n",str);
    printf("to_find : %s\n",to_find);

    ret = strstr(str, to_find);

    printf("The substring is: %s\n", ret);
}

int main()
{
    test1();
    test2();
    test3();
    test4();
    return(0);
}