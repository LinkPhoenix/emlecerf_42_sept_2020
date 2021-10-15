#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long nb_long;

	nb_long = nb;
	if (nb_long < 0)
	{
		ft_putchar('-');
		nb_long = nb_long * -1;
	}
	if (nb_long < 10)
		ft_putchar(nb_long + 48);
	if (nb_long > 9)
	{
		ft_putnbr(nb_long / 10);
		ft_putnbr(nb_long % 10);
	}
}*/

int		main(int argc ,char *argv[])
{
    if (argc != 2)
    {
        printf("\033[1;31mERROR\n\033[0m");
        return (1);
    }

	ft_putnbr(atoi(argv[1]));
	write(1, "\n", 1);
	return (0);
}