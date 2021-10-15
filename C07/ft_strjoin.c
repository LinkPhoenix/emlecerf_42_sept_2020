#include <stdlib.h>
#include <stdio.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		array_len(int size, char **strs, char *sep)
{
	int i;
	int length;

	i = 0;
	length = 0;
	while (i < size)
		length += ft_strlen(strs[i++]);
	if (i < 1)
		return (length);
	return (length + ft_strlen(sep) * (size - 1));
}

void	ft_strcat(char *dest, char *src, int *k)
{
	int i;

	i = -1;
	while (src[++i])
		dest[i] = src[i];
	*k += i;
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		k;
	char	*tab;

	i = -1;
	k = 0;
	if (!(tab = (char*)malloc((array_len(size, strs, sep)) * sizeof(char))))
		return (NULL);
	while (++i < size)
	{
		j = -1;
		while (strs[i][++j])
			tab[k++] = strs[i][j];
		if (i < size - 1)
			ft_strcat(tab + k, sep, &k);
	}
	tab[k] = '\0';
	return (tab);
}

int		main(int argc, char *argv[])
{
	printf("\033[0;33mHOW USE IT?\n\nYou must give for the first 3 parameters of the character strings and the 4th with which you want to separate\n\n\033[0m");
	if (argc != 5)
	{
		printf("\033[1;31mERROR\nI needs 3 string and 1 more for sep\n\033[0m");
		return (0);
	}

	//You must give for the first 3 parameters of the character strings and the 4th with which you want to separate

	char *strs[] = {argv[1], argv[2], argv[3]};
	int size = 3;
	char *ret = ft_strjoin(size, strs, argv[4]);
	printf("%s\n", ret);
	free(ret);
}