#include <stdio.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, str + i, 1);
		i++;
	}
}

int	main(void)
{
	char str1[5] = "Hello";
  char str2[7] = "World!";

	ft_putstr(str1);
  write(1, "\n", 1);
  ft_putstr(str2);
  write(1, "\n", 1);
	return (0);
}