#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] = str[i] - 32;
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

	printf("str1 renvoi : %s\n", ft_strupcase(str1));
	printf("str2 renvoi : %s\n", ft_strupcase(str2));
	printf("str3 renvoi : %s\n", ft_strupcase(str3));
	printf("str4 renvoi : %s\n", ft_strupcase(str4));
	return (0);
}