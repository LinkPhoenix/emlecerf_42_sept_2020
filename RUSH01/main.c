#include <unistd.h>
#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i])
		i++;
	return(i);
}

int		ft_check_params(int argc, char **argv)
{
	int *params
	int i;

	i = 0;
	params = (int*)malloc(16 * sizeof(int))
	if (argc != 2  || ft_strlen(*argv[1] != 32))
	{
		ft_putchar("ERROR\n");
		return (0);
	}
	while(argv[1][i])
	{
		if (argv[1][i] >= '0' && argv[1][i] <= '9')
		{
			params[i] = argv[1][i] + 48;
			i++;
		}
		else
			return(0);
		if (argv[1][i] == ' ')
			i++;
		else
			return(0);
	}
}

int		ft_is_in_line(int grid[4][4], int x, int y, char value)
{
	int i;
	int b;
	int a;

	i = 0;
	b = x - 1;
	a = x + 1;
	if (b < 1 || a > 4)
		return (0);
	while (a != -1)
	{
		if (grid[x][y] == value)
			return (0);
		a--;
	}
	while (b != 5)
	{
		if (grid[x][y] == value)
			return (0);
		b++;
	}
}

int		ft_is_in_column(int grid[4][4], int x, int y, char value)
{
	int i;
	int b;
	int a;

	i = 0;
	b = y - 1;
	a = y + 1;
	if (b < 1 || a > 4)
		return (0);
	while (a != -1)
	{
		if (grid[x][y] == value)
			return (0);
		a--;
	}
	while (b != 5)
	{
		if (grid[x][y] == value)
			return (0);
		b++;
	}
}

void	ft_print_tab(int grid[4][4])
{
	int		row;
	int		col;
	char	c;

	row = 0;
	while (row < 4)
	{
		col = 0;
		c = 49;
		while (col < 4)
		{
			grid[row][col] = c;
			write(1, &c, 1);
			if (col != 3)
				write(1, " ", 1);
			col++;
			c++;
		}
		write(1, "\n", 1);
		row++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, str + i, 1);
	}
}

int	main(int argc, char *argv[])
{
	ft_check_params(argc, *argv[]);
	return (0);
}