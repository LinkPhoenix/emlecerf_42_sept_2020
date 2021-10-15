#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_atoi(char *str)
{
	int i;
	int nb;
	int v_return;
	int minus;

	i = 0;
	v_return = 0;
	minus = 1;
	while (str[i] >= 0 && str[i] <= 32 && str[i])
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			minus = minus * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = str[i] - 48;
		v_return = nb + (v_return * 10);
		printf("nb = %d\nv_return = %d\n", nb, v_return);
		i++;
	}
	return (v_return * minus);
}

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
        printf("\033[1;31mERROR\n\033[0m");
		return (1);
	}

  printf("\033[1;31mATTENTION ON NE COMPARE PAS EXACTEMENT ATOI\nON GERE LES + ET LES -\n\033[0m");


	printf("\033[1;33mFT_ATOI : %i\n\033[0m", ft_atoi(argv[1]));
	printf("\033[0;31m####################\n\033[0m");
	printf("\033[1;36mATOI %i\n\033[0m", atoi(argv[1]));
	return (0);
}