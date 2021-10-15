#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i])
	{
		if (str[i] >= 48 && str[i] <= 57)
			i++;
		else
			return (0);
	}
	return (1);
}

int	main(void)
{
	char str1[] = "";
	char str2[] = "231567";
	char str3[] = "1560 165";
	char str4[] = "156\\56561";

	printf("str1 renvoi : %d\n", ft_str_is_numeric(str1));
	printf("str2 renvoi : %d\n", ft_str_is_numeric(str2));
	printf("str3 renvoi : %d\n", ft_str_is_numeric(str3));
	printf("str4 renvoi : %d\n", ft_str_is_numeric(str4));
	return (0);
}