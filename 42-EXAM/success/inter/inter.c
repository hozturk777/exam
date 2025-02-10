#include <unistd.h>

int check(char c, char *av, int i)
{
	int	h;

	h = 0;
	while (h < i)
	{
		if (av[h] == c && i != 0)
			return (0);
		h++;
	}
	return (1);
}

int	check2(char c, char *av2)
{
	int	i;

	i = 0;
	while (av2[i])
	{
		if (av2[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	main(int ac, char *av[])
{
	int	i;

	i = 0;
	if (ac == 3)
	{
		while (av[1][i])
		{
			if ((check(av[1][i], av[1], i) && check2(av[1][i], av[2])))
				write (1, &av[1][i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
}
