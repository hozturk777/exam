#include <unistd.h>

int main(int ac, char *av[])
{
	int	i;
	int	rev;

	i = 0;
	rev = 0;
	if (ac == 2)
	{
		while (av[1][i])
		{
			if ((av[1][i] >= 'a' && av[1][i] <= 'z'))
			{
				rev = av[1][i] - 96;
				while (rev > 0)
				{
					write (1, &av[1][i], 1);
					rev--;
				}
			}
			else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
			{
				rev = av[1][i] - 64;
				while (rev > 0)
				{
					write (1, &av[1][i], 1);
					rev--;
				}
			}
			else
			{
				write (1, &av[1][i], 1);
			}
			i++;
		}
	}
	write (1, "\n", 1);
}
