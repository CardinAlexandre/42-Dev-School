#include <string.h>
#include <stdio.h>

char *ft_strupcase(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		if(str[i] >= 97 &&str[i] <= 122)
			{
				printf("condition 1\n");
				str[i] = str[i] - 32;
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