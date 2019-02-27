#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

int		calc_size_params(int argc, char **argv)
{
	int	size_argv;
	int	i;
	int	z;

	i = 1;
	z = 0;
	size_argv = 0;
	while (i < argc)
	{
		while (argv[i][z])
			z++;
		size_argv += z;
		z = 0;
		i++;
	}
	return (size_argv);
}

void	write_tab(int argc, char **argv, char *string, int size_params)
{
	int	i;
	int	j;
	int	z;

	i = 0;
	j = 1;
	z = 0;
	while (i < size_params)
	{
		while (j < argc)
		{
			while (argv[j][z])
			{
				string[i] = argv[j][z];
				z++;
				i++;
			}
			string[i] = '\n';
			i++;
			z = 0;
			j++;
		}
	}
	string[i] = '\0';
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*string;
	int		size_params;

	size_params = calc_size_params(argc, argv);
	string = (char*)malloc(sizeof(*string) * (size_params + argc - 1));
	write_tab(argc, argv, string, size_params);
	return (string);
}


int		main(int argc, char **argv)
{
	printf("%s", ft_concat_params(argc, argv));
	return (0);
}