#include <stdio.h>
#include <stdlib.h>

int	ft_is_prime(int nb)
{
	int i;

	i = 2;
	if (nb <= 1 || nb == 4 || nb == 9)
		return (0);
	while (i < nb && i < 46341)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	main(int argc, char *argv[])
{
	int i;
	int j;

	i = -1;
	if (argc != 2)
	{
		printf("\033[1;31mERROR\n\033[0m");
		exit(1);
	}
	j = atoi(argv[1]);
	while (++i < j + 1)
	{
		if (ft_is_prime(i) == 0)
			printf("is prime ? \033[0;33m%d : %d\033[0m\n", i, ft_is_prime(i));
		else
			printf("is prime ? \033[1;32m%d : %d\033[0m\n", i, ft_is_prime(i));
	}
	return (0);
}