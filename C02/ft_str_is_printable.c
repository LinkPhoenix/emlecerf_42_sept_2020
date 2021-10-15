#include <unistd.h>
#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i])
	{
		if (str[i] >= 32 && str[i] <= 127)
			i++;
		else
			return (0);
	}
	return (1);
}

int	main(void)
{
	char str1[] = "";
	char str2[] = " !\"#$%&\'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~'";
	char str3[] = " !(bonJour-LesGens";
	char str4[] = "asdsad ads \t";

	printf("str1 renvoi : %d\n", ft_str_is_printable(str1));
	printf("str2 renvoi : %d\n", ft_str_is_printable(str2));
	printf("str3 renvoi : %d\n", ft_str_is_printable(str3));
	printf("str4 renvoi : %d\n", ft_str_is_printable(str4));
	return (0);
}