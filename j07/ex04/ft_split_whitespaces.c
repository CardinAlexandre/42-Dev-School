#include <stdio.h>
#include <stdlib.h>

int		calc_nb_words(char *str, int *size_word)
{
	int	word;
	int	i;

	i = 0;
	word = 0;
	while (str[i])
	{
		if (str[i] != ' ')
			word++;
		while (str[i] != ' ')
		{
			size_word[word - 1] = size_word[word - 1] + 1;
			i++;
		}
		while (str[i] == ' ')
			i++;
	}
	return (word);
}

void	ft_split_whitespaces(char *str)
{
	int		nb_words;
	int		tab[10];
	char	*temp;
	char	**string = NULL;
	int		i;

	i = 0;
	nb_words = calc_nb_words(str, tab);
	*string = (char*)malloc(sizeof(**string) * (nb_words + 1));
	while (i < nb_words)
	{
		string[i] = (char*)malloc(sizeof(*temp) * (tab[i] + 1));
		i++;
	}
}

char    **ft_split_whitespaces(char *str);

int main()
{
	char str0[] = "la team rocket s'envole vers d'autres ciels !";
	char str1[] = " Miaous   vs   Norminet ?\n\n\nQui gagnera la bataille ? ";
	char str2[] = "\tscarpent\t\thellinge\nldallende\t\t\t\tasablayr         lfalkau\t   \n  \t";
	char str3[] = "Masterball ?\nAlright !";

	printf("expected : la.team.rocket.s'envole.vers.d'autres.ciels.!.\n");
	printf("Your output : ");
	for (int i = 0; i < ft_count_words(str0); i++)
		printf("%s.", ft_split_whitespaces(str0)[i]);
	printf("\n");

	printf("expected : Miaous.vs.Norminet.?.Qui.gagnera.la.bataille.?.\n");
	printf("Your output : ");
	for (int i = 0; i < ft_count_words(str1); i++)
		printf("%s.", ft_split_whitespaces(str1)[i]);
	printf("\n");

	printf("expected : scarpent.hellinge.ldallende.asablayr.lfalkau.\n");
	printf("Your output : ");
	for (int i = 0; i < ft_count_words(str2); i++)
		printf("%s.", ft_split_whitespaces(str2)[i]);
	printf("\n");

	printf("expected : Materball.?.Alright.!.\n");
	printf("Your output : ");
	for (int i = 0; i < ft_count_words(str3); i++)
		printf("%s.", ft_split_whitespaces(str3)[i]);
	printf("\n");

	return (0);
}