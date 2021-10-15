#include <stdio.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	main(void)
{
	char str[60] = "bonjour";

	printf("la longueur du tab de char de \"bonjour\" est de %d", ft_strlen(str));
	return (0);
}