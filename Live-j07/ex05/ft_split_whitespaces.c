#include <stdlib.h>
#include <stdio.h>

int ft_count_word_char(char *str, int k)
{
	int i;

	i = 0;
	while (str[k] != '\t' && str[k] != '\n' && str[k] != ' ' 
		&& str[k] != '\r' && str[k] !='\v' && str[k] != '\0')
	{
		i++;
		k++;
	}
	return (i);
}

int ft_count_words(char *str)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if ((str[i] != '\t' && str[i] != '\n' && str[i] != ' '
			&& str[i] != '\v' && str[i] != '\r' && str[i] != '\0') 
			&& (str[i + 1] == '\t' || str[i + 1] == '\n' || str[i + 1] == ' '
			|| str[i + 1] == '\r' || str[i + 1] == '\v' || str[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

char	**ft_split_whitespaces(char *str)
{
	int i;
	int j;
	int k;
	char **tab;

	tab = malloc(sizeof(char*) * ft_count_words(str) + 1);
	i = 0;
	k = 0;
	while (i < ft_count_words(str))
	{
		while (str[k] == '\t' || str[k] == '\n' || str[k] == ' '
			|| str[k] == '\r' || str[k] == '\v' || str[k] == '\0')
			k++;
		tab[i] = malloc(sizeof(char*) * ft_count_word_char(str, k) + 1);
		j = 0;
		while (str[k] != '\t' && str[k] != '\n' && str[k] != ' '
			&& str[k] != '\v' && str[k] != '\r' && str[k] != '\0')
			tab[i][j++] = str[k++];
		tab[i][j] = '\0';
		i++;
	}
	tab[i] = 0;
	return (tab);
}
