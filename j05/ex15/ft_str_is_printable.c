int ft_str_is_printable(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		if (str[i] < 33)
		{
			return (0);
		}
		i++;
	}
	return (1);
}