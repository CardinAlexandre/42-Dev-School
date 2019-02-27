#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	ft_strlen(char *str) // permet de compter la tailler d'une chaine 
{
	int compt;

	compt = 0;
	while (str[compt])
		compt++;
	return (compt);
}

char *ft_strcat(char *dest, char *src) // permet de concatener mes chaines
{
    char *result = dest;
 
    while(*dest != '\0')
        dest++;
    while(*src != '\0')
    {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
    return (result);
}

char *ft_concat_params(int argc, char **argv)
{
	char *str;
	int size;
	int i;

	i = 0;
	while (i < argc)
	{
		size = size + ft_strlen(argv[i]);
		i++;
	}
	i = 1;
	str = (char*)malloc(sizeof(char) * (size + argc - 1));
	while (i < argc)
	{
		ft_strcat(str, argv[i]);
		i++;
		ft_strcat(str, "\n");
	}
	return (str);
}

int		main(int argc, char **argv)
{
	printf("%s", ft_concat_params(argc, argv));
	return (0);
}
