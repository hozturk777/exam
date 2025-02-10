#include <unistd.h>

int	check(char c, char *str, int i)
{
	int h;

	h = 0;
	while (i > h)
	{
		if (str[h] == c)
			return (0);
		h++;
	}
	return (1);
}

int	check2(char c, char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

int main(int ac, char *av[])
{
	int	i;

	i = 0;
	if (ac == 3)
	{
		while (av[1][i])
		{
			if (check(av[1][i], av[1], i) || i == 0)
			{
				write (1, &av[1][i], 1);
			}
			i++;
		}
		i = 0;
		while (av[2][i])
		{
			if (check(av[2][i], av[2], i) || i == 0)
			{
				if (check2(av[2][i], av[1]))
				{
					write (1, &av[2][i], 1);
				}
			}
			i++;
		}
	}
	write (1, "\n", 1);
}
