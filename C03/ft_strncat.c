#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
 	while (dest[i])
		i++;
	while (src[j] && j < nb)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}


int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		printf("I need 4 arguments 2 string and 1 number");
	}

	char argv1a[80];
	char argv1b[80];

	*argv1a = *strcpy(argv1a, argv[1]);
	*argv1b = *strcpy(argv1b, argv[1]);

  printf("\033[0;34m");
	printf("argv1a = \"%s\"\n", argv1a);
	printf("argv[2] = \"%s\"\n", argv[2]);
	printf("le vrai strncat fait \"%s\"\n", strncat(argv1a, argv[2], atoi(argv[3])));
  printf("\033[0m");
	printf("##########\n");
  printf("\033[0;32m");
	printf("argv1b = \"%s\"\n", argv1b);
	printf("argv[2] = \"%s\"\n", argv[2]);
	printf("Mon strncat fait \"%s\"\n", ft_strncat(argv1b, argv[2], atoi(argv[3])));
  printf("\033[0m");

	return(0);
}