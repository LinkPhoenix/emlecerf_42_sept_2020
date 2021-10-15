#include <stdio.h>
#include <stdlib.h>

int	ft_is_prime(int nb)
{
	int i;

	i = 2;
	if (nb <= 1)
		return (0);
	if (nb == 4 || nb == 9)
		return (0);
	while (i < nb / i && i < 46341)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int i;

	i = nb;
	while (!(ft_is_prime(i)))
		i++;
	return (i);
}

int	main(int argc, char *argv[])
{
	int i;

	i = atoi(argv[1]);
	if (argc != 2)
	{
		printf("\033[1;31mERROR\n\033[0m");
		exit(1);
	}
	printf("nb is : \033[0;32m%d\033[0m\n", i);
	printf("next prime : \033[0;33m%d\033[0m\n", ft_find_next_prime(i));
}