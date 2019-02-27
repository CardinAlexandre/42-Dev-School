char **ft_split_whitespaces(char *str);
void	ft_putchar(char c);

void ft_print_words_tables(char **tab)
{
	int i;
	int j;

	j = 0;
	while (tab[j] != 0)
	{
		i = 0;
		while (tab[j][i] != '\0')
			ft_putchar(tab[j][i++]);
		ft_putchar('\n');
		j++;
	}
}