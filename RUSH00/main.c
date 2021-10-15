#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_first_line(int x)
{
	int i;

	i = 1;
	ft_putchar('o');
	while (i < x)
	{
		if (i > 1)
			ft_putchar('-');
		if (i == x - 1)
			ft_putchar('o');
		i++;
	}
	ft_putchar('\n');
}

void	ft_middle_line(int x, int y)
{
	int i;
	int j;

	j = 1;
	while (j < y - 1)
	{
		i = 1;
		ft_putchar('|');
		while (i < x - 1)
		{
			ft_putchar(' ');
			i++;
		}
		if (i == x - 1)
			ft_putchar('|');
		ft_putchar('\n');
		j++;
	}
}

void	ft_last_line(int x)
{
	int i;

	i = 1;
	ft_putchar('o');
	while (i < x)
	{
		if (i > 1)
			ft_putchar('-');
		if (i == x - 1)
			ft_putchar('o');
		i++;
	}
	ft_putchar('\n');
}

int		rush(int x, int y)
{
	if (x <= 0 || y <= 0)
		return (0);
	ft_first_line(x);
	if (y > 2)
		ft_middle_line(x, y);
	if (y > 1)
		ft_last_line(x);
	return (0);
}

int	main(void)
{
	rush(10, 45);
	return (0);
}

// ./main | wc -l
// ./main | awk {'print length'}