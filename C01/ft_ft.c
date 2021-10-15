#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int	main(void)
{
	int nbr;

	nbr = 50;
	printf("nbr avant traitement fait %d\n", nbr);
	ft_ft(&nbr);
	printf("nbr apres traitement fait %d\n", nbr);
	return (0);
}