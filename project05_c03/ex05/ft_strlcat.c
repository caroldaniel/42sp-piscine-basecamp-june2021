int	ft_strlen(char *str);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	index_src;
	unsigned int	len_dest;
	unsigned int	len_src;

	len_dest = ft_strlen(dest);
	len_src = ft_strlen(src);
	if (size <= len_dest)
		return (size + len_src);
	index_src = 0;
	while (src[index_src] != '\0' && size > len_dest + 1)
	{
		dest[len_dest] = src[index_src];
		index_src++;
		len_dest++;
	}
	dest[len_dest] = '\0';
	return (len_dest + ft_strlen(&src[index_src]));
}

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
		n++;
	return (n);
}
