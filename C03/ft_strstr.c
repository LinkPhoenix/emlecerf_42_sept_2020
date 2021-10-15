#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	i = 0;
	if (to_find[i] == '\0')
		return (str);
	while(str[i])
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
				return (str + i);
			j++;
		}
		i++;
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("ERROR\n");
		return (1);
	}

	printf("Le vrai strstr fait : \"%s\"\n", strstr(argv[1], argv[2]));
	printf("Mon strstr fait : \"%s\"\n", ft_strstr(argv[1], argv[2]));

	if ((strstr(argv[1], argv[2]) == (ft_strstr(argv[1], argv[2]))))
		printf("\033[1;32mOK :)\n\033[0m");
	else
		printf("\033[1;31mKO :(\n\033[0m");
	return(0);
}