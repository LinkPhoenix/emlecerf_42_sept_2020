#include <string.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] && (s1[i] == s2[i]))
	{
		if (s1[i] == s2[i])
			i++;
	}
	return (s1[i] - s2[i]);
}

int	main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("ERROR");
		return (1);
	}
	printf("Le vrai strcmp fait : %d\n", strcmp(argv[1], argv[2]));
	printf("mon strcmp fait : %d\n", ft_strcmp(argv[1], argv[2]));
	return(0);
}