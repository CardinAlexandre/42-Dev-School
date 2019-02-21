#include <string.h>

// dest	-	pointeur sur la chaîne d'octets vers laquelle copier
// src	-	pointeur sur la chaîne d'octets terminée par NULL à copier

char *ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while(src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}