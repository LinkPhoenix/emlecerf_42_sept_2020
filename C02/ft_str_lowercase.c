#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 90)
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

int		main(void)
{
	char str1[] = "";
	char str2[] = "aller les gens j'espere 42sd";
	char str3[] = "BONjour LeS AMies";
	char str4[] = "zNJUa";

	printf("str1 renvoi : %s\n", ft_strlowcase(str1));
	printf("str2 renvoi : %s\n", ft_strlowcase(str2));
	printf("str3 renvoi : %s\n", ft_strlowcase(str3));
	printf("str4 renvoi : %s\n", ft_strlowcase(str4));
	return (0);
}