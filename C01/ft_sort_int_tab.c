
#include <unistd.h>
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int swap;

	i = 0;
	while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])
		{
			swap = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = swap;
			i = 0;
		}
		else
			i++;
	}
}

int main(void)
{
	int str[5] = {5, 3, 8, 7, 1};

	int i;

	i = 0;
	while (i < 5)
	{
		printf("index %d est %d\n", i, str[i]);
		i++;
	}

	printf("\n\n\n\n");
	ft_sort_int_tab(str, 5);

	i = 0;
	while (i < 5)
	{
		printf("index %d est %d\n", i, str[i]);
		i++;
	}

	return (0);
}