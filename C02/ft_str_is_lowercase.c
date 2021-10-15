#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i])
	{
		if (str[i] >= 97 && str[i] <= 122)
			i++;
		else
			return (0);
	}
	return (1);
}

int	main(void)
{
	char str1[] = "";
	char str2[] = "allerlesgensz";
	char str3[] = "Bonjour Les Ammis";
	char str4[] = "ilsd sd sds";

	printf("str1 renvoi : %d\n", ft_str_is_lowercase(str1));
	printf("str2 renvoi : %d\n", ft_str_is_lowercase(str2));
	printf("str3 renvoi : %d\n", ft_str_is_lowercase(str3));
	printf("str4 renvoi : %d\n", ft_str_is_lowercase(str4));
	return (0);
}