#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			i++;
		else
			return (0);
	}
	return (1);
}

int	main(void)
{
	char str1[] = "";
	char str2[] = "ALLEZLESGES";
	char str3[] = "Bonjour Les";
	char str4[] = "ZilEtais UNE fois";

	printf("str1 renvoi : %d\n", ft_str_is_uppercase(str1));
	printf("str2 renvoi : %d\n", ft_str_is_uppercase(str2));
	printf("str3 renvoi : %d\n", ft_str_is_uppercase(str3));
	printf("str4 renvoi : %d\n", ft_str_is_uppercase(str4));
	return (0);
}