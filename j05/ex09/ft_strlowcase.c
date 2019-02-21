#include <string.h>
#include <stdio.h>

char *ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		if(str[i] >= 65 &&str[i] <= 90)
			{
				printf("condition 1\n");
				str[i] = str[i] + 32;
				i++;
			}
			else
			{
				printf("condition 2\n");
				i++;
			}
	}
	return (str);
}