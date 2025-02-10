#include <unistd.h>
#include <limits.h>

int	ft_atoi(char *str)
{
	int i;
	int res;

	i = 0;
	res = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '+')
		i++;
	while (str[i] <= '9' && str[i] >= '0')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (res);
}

void	ft_putnbr(int n)
{
	if (n / 10 > 0)
		ft_putnbr(n / 10);
	char c = (n % 10) + '0';
	write (1, &c, 1);
}

int main(int ac, char *av[])
{
	int	i;
	int nbr;

	i = 1;
	nbr = 0;
	if (ac == 2)
	{
		nbr = ft_atoi(av[1]);
		while (i <= 9)
		{
			ft_putnbr(i);
			//write (1, ((char[]){i + '0'}), 1);
			write (1, " x ", 3);
			ft_putnbr(nbr);
			write (1, " = ", 3);
			ft_putnbr(i * nbr);
			write (1, "\n", 1);
			i++;
		}
	}
	else
		write (1, "\n", 1);
}
