#include <unistd.h>

int	main(void)
{
	int i;

	i = 0;
	while (i <= 127)
	{
		write(1, &i, 1);
		i++;
	}
	return (0);
}