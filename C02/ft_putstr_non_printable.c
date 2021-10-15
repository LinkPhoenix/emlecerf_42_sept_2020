#include <stdio.h>
#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	char *hex;
	int i;

	hex = "0123456789abcdef";
	i = 0;

	while (str[i])
	{
		if ((str[i] >= 0 && str[i] <= 31) ||
				(str[i] >= 123 && str[i] <= 127))
		{
			write(1, "\\", 1);
			write(1, &hex[str[i] / 16], 1);
			write(1, &hex[str[i] % 16], 1);
		}
		else
			write(1, str + i, 1);
		i++;
	}

}

int		main(void)
{
	char str1[] = "\\nBonjour\\t les\\n amies!\\b comment tu vas\\f nous somme a 42\\v et tout vas bien\\r";
	char str2[] = "\nBonjour\t les\n amies!\b comment tu vas\f nous somme a 42\v et tout vas bien\r";
	char all_hex[] = "Control character in Hexadecimal\n\nNUL \\0 = 00\n\
BEL \\a = 07\nBACKSPACE \\b = 08\nHORIZONTAL TABULATION \\t = 09\nLINE FEED \
\\n = 0A\nLINE TABULATION \\v = 0B\nFORM FEED \\f = 0C\nCARRIAGE RETURN \\r\
 = 0D\n";
 	char hashtag[] = "####################\n";
	int i;

	i = 0;
	while (all_hex[i])
	{
		write (1, all_hex + i, 1);
		i++;
	}
	i = 0;
	while (hashtag[i])
	{
		write (1, hashtag + i, 1);
		i++;
	}
	write (1, "STR1\n", 5);
	i = 0;
	while (str1[i])
	{
		write(1, str1 + i, 1);
		i++;
	}
	write (1, "\n", 1);
	write (1, "STR2\n", 5);
	ft_putstr_non_printable(str2);
	return(0);
}