#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}


char *ft_strdup(char *src)
{
	char *dest;
	int i;

	i = 0;
	dest = NULL;
	while (src[i] != '\0')
		{
			i++;
		}
		dest=(char *)malloc(sizeof(char) * i++);
		if (dest == NULL)
			return (NULL);
		i = 0;
		while (src[i] != 0)
		{
			dest[i] = src[i];
			i++;
		}
		return (dest);
}

int	main()
{
	char *src;
	char *dest;

	src = "42 school\n";
	dest = ft_strdup(src);
	
	printf("%s", src);
	printf("%s", dest);
	return (0);
}