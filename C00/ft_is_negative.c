#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n < 0)
		write(1, "N", 1);
	else
		write(1, "P", 1);
}

int main(void)
{
  write(1, "54 est : ", 9);
  ft_is_negative(54);
  write(1, "\n", 1);
  write(1, "0 est : ", 8);
  ft_is_negative(0);
  write(1, "\n", 1);
  write(1, "-65 est : ", 10);
  ft_is_negative(-65);
  write(1, "\n", 1);
}