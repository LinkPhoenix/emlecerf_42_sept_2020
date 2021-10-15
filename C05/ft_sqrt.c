#include <stdio.h>
#include <stdlib.h>

int ft_sqrt(int nb)
{
    int i;

    i = 0;
    if (nb <= 0)
        return (0);
    if (nb == 1)
        return (1);
    while (i < nb)
    {
        if (i * i > nb)
            return (0);
        else if (i > 46340)
            return (0);
        else if (nb == i * i)
            return (i);
        i++;
    }
    return (0);
}

int	main(int argc, char *argv[])
{
	int i;
	int j;

	i = -1;
	if (argc != 2)
	{
		printf("\033[1;31mERROR\n\033[0m");
		exit(1);
	}
	j = atoi(argv[1]);
printf("sqrt of \033[0;32m%d\033[0m : ", atoi(argv[1]));
printf("\033[1;33m%d\n\033[0m", ft_sqrt(atoi(argv[1])));
	/*while (++i < j + 1)
	{
		printf("sqrt of \033[0;32m%d\033[0m : ", i);
		if (ft_sqrt(i) > 0)
			printf("\033[1;33m%d\n\033[0m", ft_sqrt(i));
		else
			printf("\033[0;32m%d\n\033[0m", ft_sqrt(i));
	}*/
	return (0);
}