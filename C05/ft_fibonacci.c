#include <stdio.h>
#include <stdlib.h>

int ft_fibonacci(int index)
{
    if (index < 0)
        return (-1);
    if (index == 0)
        return (0);
    if (index == 1)
        return (1);
    return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

int	main(int argc, char *argv[])
{
	int i;
	int j;

	i = -1;
	j = atoi(argv[1]);
	if (argc != 2)
	{
		printf("\033[1;31mERROR\n\033[0m");
		exit(1);
	}
	while (++i < j + 1)
		printf("fibonacci of \033[0;32m%d : %d\033[0m\n", i, ft_fibonacci(i));
}