#include <stdio.h>

void	ft_capitalize_char(char *str)
{
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 32;
}

char	*ft_strcapitalize(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	ft_capitalize_char(str);
	while (str[j])
	{
		if (((str[j - 1] >= 0 && str[j - 1] <= 47) ||
				(str[j - 1] >= 123 && str[j - 1] <= 127) ||
				(str[j - 1] >= 58 && str[j - 1] <= 64)) &&
				(str[j] >= 'a' && str[j] <= 'z'))
		{
			str[j] = str[j] - 32;
			j++;
		}
		j++;
	}
	return (str);
}

int		main(void)
{
	char str1[] = "";
	char str2[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un;";
	char str3[] = "zONjour LeS   ?AMies";
	char str4[] = "zNJUa";

	printf("str1 est : %s\n", str1);
	printf("str1 devient : %s\n", ft_strcapitalize(str1));
	printf("str2 est : %s\n", str2);
	printf("str2 devient : %s\n", ft_strcapitalize(str2));
	printf("str2 est : %s\n", str3);
	printf("str3 devient : %s\n", ft_strcapitalize(str3));
	printf("str4 est : %s\n", str4);
	printf("str4 devient : %s\n", ft_strcapitalize(str4));
	return (0);
}