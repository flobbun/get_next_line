#include "get_next_line.h"

char	*ft_find_nl(char *str)
{
	char	*temp;
	int		i;

	if (!str[0])
		return (NULL);
	temp = malloc(sizeof(char) * ft_count_nl(str) + 2);
	if (temp == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\n' && str[i])
	{
		temp[i] = str[i];
		i++;
	}
	if (str[i] == '\n')
	{		
		temp[i] = str[i];
		i++;
	}
	temp[i] = '\0';
	return (temp);
}

int	ft_count_nl(char *str)
{
	int		i;

	i = 0;
	while (str[i] && str[i] != '\n')
		i++;
	return (i);
}

char	*ft_new_save(char *str)
{
	char	*new_save;
	int		i;
	int		j;

	i = ft_count_nl(str);
	if (!str[i])
	{
		free(str);
		return (NULL);
	}
	new_save = malloc(sizeof(char) * (ft_strlen(str) - i + 1));
	if (!new_save)
		return (NULL);
	i++;
	j = 0;
	while (str[i])
		new_save[j++] = str[i++];
	new_save[j] = '\0';
	free(str);
	return (new_save);
}
