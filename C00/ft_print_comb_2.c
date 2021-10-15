#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int number1;
	int number2;

	number1 = 0;
	while (number1 <= 98)
	{
		number2 = number1 + 1;
		while (number2 <= 99)
		{
			ft_putchar(number1 / 10 + 48);
			ft_putchar(number1 % 10 + 48);
			ft_putchar(' ');
			ft_putchar(number2 / 10 + 48);
			ft_putchar(number2 % 10 + 48);
			if (number1 < 98)
				write(1, ", ", 2);
			number2++;
		}
		number1++;
	}
}

int main(void)
{
  ft_print_comb2();
  return(0);
}