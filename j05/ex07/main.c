#include <string.h>
#include <stdio.h>
 
int ft_strncmp(char *s1, char *s2, unsigned int n);
 
void test1(void)
{
    char *s1 = "abcd";
    char *s2 = "abcd";
    printf("s1 : %s\n", s1);
    printf("s2 : %s\n", s2);
    printf("n : %d\n\n", ft_strncmp(s1,s2,4));
 
}
 
void test2(void)
{
    char *s1 = "abde";
    char *s2 = "abcd";
    printf("s1 : %s\n", s1);
    printf("s2 : %s\n", s2);
    printf("n : %d\n\n", ft_strncmp(s1,s2,4));
}
 
void test3(void)
{
    char *s1 = "abcd";
    char *s2 = "abde";
    printf("s1 : %s\n", s1);
    printf("s2 : %s\n", s2);
    printf("n : %d\n\n", ft_strncmp(s1,s2,4));
 
}
 
void test4(void)
{
    char *s1 = "Heisenberg";
    char *s2 = "Walter-white";
    printf("s1 : %s\n", s1);
    printf("s2 : %s\n", s2);
    printf("n : %d\n\n", ft_strncmp(s1,s2,12));
}
 
int main()
{
    test1();
    test2();
    test3();
    test4();
    return (0);
}