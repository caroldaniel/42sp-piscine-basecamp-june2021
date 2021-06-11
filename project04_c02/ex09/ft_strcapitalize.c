int	ft_char_is_alpha(char c);
int	ft_char_is_numeric(char c);
int	ft_char_is_lowercase(char c);
int	ft_char_is_uppercase(char c);

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	is_first;

	i = 0;
	is_first = 0;
	while (str[i] != '\0')
	{
		if ((is_first == 0) && (ft_char_is_lowercase(str[i]) == 1))
		{
			str[i] -= 'a' - 'A';
			is_first++;
		}
		else if ((is_first > 0) && (ft_char_is_uppercase(str[i]) == 1))
			str[i] += 'a' - 'A';
		else if ((ft_char_is_alpha(str[i]) == 0) && \
			(ft_char_is_numeric(str[i]) == 0))
			is_first = 0;
		else
			is_first++;
		i++;
	}
	return (str);
}

int	ft_char_is_alpha(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

int	ft_char_is_numeric(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

int	ft_char_is_lowercase(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

int	ft_char_is_uppercase(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
