#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int len;
	int *range;
	int i;

	len = max - min;
	i = 0;
	if (min >= max)
		return (0);
	if (!(range = (int*)malloc(len * sizeof(int))))
			return(NULL);
	while (i < len)
	{
		range[i] = min;
		min++;
		i++;
	}
	return (range);
}

int	main(int argc, char *argv[])
{
	int	i;
	int *num;

	if (argc < 3)
		exit(1);
	num = ft_range(atoi(argv[1]), atoi(argv[2]));
	i = -1;
	while (++i < atoi(argv[2]) - atoi(argv[1]))
		printf("INDEX : \033[0;33m%d\033[0m | NUM : \033[0;32m%d\033[0m\n",i ,num[i]);
	return (0);
}