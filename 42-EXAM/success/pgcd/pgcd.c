#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char *av[])
{
	int	min;
	int	num1;
	int	num2;
	
	if (ac == 3)
	{
		num1 = atoi(av[1]);
		num2 = atoi(av[2]);
		if (num1 > num2)
			min = num1;
		else
			min = num2;
		while (min > 0)
		{
			if (num1 % min == 0 && num2 % min == 0)
			{
				 printf("%d", min);
				break;
			}
			min--;
		}
	}
	printf("\n");
}
