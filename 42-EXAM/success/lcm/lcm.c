unsigned int	lcm (unsigned int a, unsigned int b)
{
	unsigned int	l;
	l = (a < b) ? a : b;
	while (a > 0 && b > 0)
	{
		if (l % a == 0 && l % b == 0)
			return (l);
		l += (a < b) ? a : b;
	}
	return (0);
}
