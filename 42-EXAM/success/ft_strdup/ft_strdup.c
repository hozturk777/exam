#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int	i;
	int	len;
	char	*dest;

	i = 0;
	len = 0;
	while (src[len])
		len++;
	dest = malloc(sizeof(char) * len);
	while(src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
