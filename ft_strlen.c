int	ft_strlen(str *char)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return(i);
}