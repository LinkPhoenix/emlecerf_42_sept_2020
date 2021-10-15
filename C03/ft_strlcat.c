#include <stdio.h>
#include <string.h>
#include <stdlib.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	while (dest[i] && i < size)
		i++;
	while (src[j] && (i + j + 1) < size)
	{
		dest[i + j] = src[j];
		j++;
	}
	if (i < size)
		dest[i] = '\0';
	return (i + ft_strlen(src));
}

int             main(int argc, char *argv[])
{
    if (argc != 4)
    {
        printf("ERROR\n");
        return (1);
    }

    char argv1a[80];

    *argv1a = *strcpy(argv1a, argv[1]);

    printf("dest est : %s\n### Ca longueur est de %lu\n", argv[1], strlen(argv[1]));
    printf("source est : %s\n### Ca longueur est de %lu\n", argv[2], strlen(argv[2]));
    printf("\033[0;33mLe vrai strlcat fait : %lu\n\033[0m", strlcat(argv[1], argv[2], atoi(argv[3])));
    printf("dest est : %s\n", argv[1]);
    printf("source est : %s\n", argv[2]);

    printf("\n#######################\n\n");

    printf("dest est : %s\nCa longueur est de %lu\n", argv1a, strlen(argv1a));
    printf("source est : %s\nCa longueur est de %lu\n", argv[2], strlen(argv[2]));
    printf("\033[0;36mMon strlcat : %u\n\033[0m", ft_strlcat(argv1a, argv[2], atoi(argv[3])));
    printf("dest est : %s\n", argv1a);
    printf("source est : %s\n", argv[2]);

    if ((strlcat(argv[1], argv[2], atoi(argv[3])) == (ft_strlcat(argv[1], argv[2], atoi(argv[3])))))
        printf("\033[1;32mOK :)\n\033[0m");
    else
        printf("\033[1;31mKO :(\n\033[0m");
}