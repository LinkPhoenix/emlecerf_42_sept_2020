#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (s1[i] && i < n && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}*/

int	main(int argc, char *argv[])
{
	if (argc != 4)
	{
		printf("ERROR");
		return (1);
	}
	printf("Le vrai strcmp fait : %d\n", strncmp(argv[1], argv[2], atoi(argv[3])));
	printf("mon strcmp fait : %d\n", ft_strncmp(argv[1], argv[2], atoi(argv[3])));
	return(0);
}