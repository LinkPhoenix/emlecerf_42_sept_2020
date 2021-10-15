#include <unistd.h>
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i])
	{
		if ((str[i] >= 'A' && str[i] <= 'Z') ||
				(str[i] >= 'a' && str[i] <= 'z'))
			i++;
		else
			return (0);
	}
	return (1);
}

int main(void)
{
	char str1[] = "";
	char str2[] = "bonjOurZ";
	char str3[] = "bon jourS";
	char str4[] = "/bonjAour";

	printf("str1 renvoi : %d\n", ft_str_is_alpha(str1));
	printf("str2 renvoi : %d\n", ft_str_is_alpha(str2));
	printf("str3 renvoi : %d\n", ft_str_is_alpha(str3));
	printf("str4 renvoi : %d\n", ft_str_is_alpha(str4));
	return (0);
}