unsigned int	ft_strlen(char *str)
{
	unsigned int	counter;

	counter = 0;
	while (str[0] != '\0' && str[++counter] != '\0')
		;
	return (counter);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	x;

	x = 0;
	while (x < size - 1 && src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}
	dest[x] = '\0';
	return (ft_strlen(src));
}
