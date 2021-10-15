#include <stdio.h>
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int j;
	int swap;

	i = 0;
	j = size - 1;
	while (i < size / 2)
	{
		swap = tab[i];
		tab[i] = tab[j];
		tab[j] = swap;
		i++;
		j--;
	}
}

int	main(void)
{
	int str[5] = {1, 8, 4, 3, 7};
	int i;

	i = 0;
	while (i < 5)
	{
		printf("index %d est %d\n", i, str[i]);
		i++;
	}
	ft_rev_int_tab(str, 5);
	printf("\n\n\n");

	i = 0;
	while (i < 5)
	{
		printf("index %d est %d\n", i, str[i]);
		i++;
	}
	return (0);
}