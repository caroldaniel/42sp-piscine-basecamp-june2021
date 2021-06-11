char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	c;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		c = 0;
		while (str[i + c] == to_find[c] && to_find[c] != '\0')
		{
			if (to_find[c + 1] == '\0')
				return (&str[i]);
			c++;
		}
		i++;
	}
	return (0);
}
