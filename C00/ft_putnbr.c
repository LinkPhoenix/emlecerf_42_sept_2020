#include <unistd.h>

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
		write(1, "-", 1);
		nb_long = nb_long * -1;
	}
	if (nb_long > 9)
	{
		ft_putnbr(nb_long / 10);
		ft_putnbr(nb_long % 10);
	}
	else
		ft_putchar(nb_long + 48);
}

int main(void)
{
  ft_putnbr(-2147483648);
  write(1, "\n", 1);
  ft_putnbr(-21);
   write(1, "\n", 1);
  ft_putnbr(0);
   write(1, "\n", 1);
  ft_putnbr(274);
   write(1, "\n", 1);
  ft_putnbr(2147483647);
  write(1, "\n", 1);
}