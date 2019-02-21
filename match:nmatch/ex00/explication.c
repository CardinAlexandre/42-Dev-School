#include <stdio.h>

int match(char *s1, char *s2)
{
		if(*s1 == '\0' && *s2 == '\0')
		{
			printf("condition 1\n");
			return (1);
		}
		if(*s1 == '\0' && *s2 == '*')
		{ 
			printf("condition 2\n");
			return (match(s1, ++s2));
		}
		if(*s2 == '*')
		{
			printf("condition 3\n");
			return (match(++s1, s2) || match(s1, ++s2));
		}
		if(*s1 == *s2)
		{
			printf("condition 4\n");
			return (match(++s1, ++s2));
		}
		else
			return (0);
}
