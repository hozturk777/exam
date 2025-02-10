#include <stdlib.h>

int	*ft_rrange(int start, int end)
{
	int	*res;
	int	n;
	int	set;
	int	i;

	set = 1;
	i = 0;
	n = end - start;

	if (n < 0)
		n *= -1;
	n++;
	res = malloc(sizeof(int) * n);
	
	if (res)
	{
		if (start < end)
			set = -1;
		while (i < n)
		{
			res[i] = end;
			end = end + set;
			i++;
		}
	}
	return res;
}
