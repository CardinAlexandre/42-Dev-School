char *ft_strncat(char *dest, char *src, int nb)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while(dest[j] != '\0')
		j++;
	while(i < nb && src[i] != '\0')
	{
		dest[j+i] = src[i];
		i++;
	}
	dest[j+i] = '\0';
	return (dest);
}