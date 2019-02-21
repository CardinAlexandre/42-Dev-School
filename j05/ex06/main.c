#include <string.h>
#include <stdio.h>
 
int ft_strcmp(char *s1, char *s2);
 
void test1(void)
{
    int resultat;
 
    char *s1 = "abcd";
    char *s2 = "abcd";
    printf("s1 : %s\n", s1);
    printf("s2 : %s\n", s2);
    resultat = ft_strcmp(s1,s2);
    printf("resultat : %d\n\n", resultat);
 
}
 
void test2(void)
{
    int resultat;
 
    char *s1 = "abde";
    char *s2 = "abcd";
    printf("s1 : %s\n", s1);
    printf("s2 : %s\n", s2);
    resultat = ft_strcmp(s1,s2);
    printf("resultat : %d\n\n", resultat);
}
 
void test3(void)
{
    int resultat;
 
    char *s1 = "abcd";
    char *s2 = "abde";
    printf("s1 : %s\n", s1);
    printf("s2 : %s\n", s2);
    resultat = ft_strcmp(s1,s2);
    printf("resultat : %d\n\n", resultat);
 
}
 
void test4(void)
{
    int resultat;
 
    char *s1 = "Heisenberg";
    char *s2 = "Walter-white";
    printf("s1 : %s\n", s1);
    printf("s2 : %s\n", s2);
    resultat = ft_strcmp(s1,s2);
    printf("resultat : %d\n", resultat);
}
 
int main()
{
    test1();
    test2();
    test3();
    test4();
    return (0);
}