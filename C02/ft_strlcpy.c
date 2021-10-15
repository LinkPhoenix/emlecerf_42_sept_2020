#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (src[i] && i < size)
	{
		src[i] = dest[i];
		i++;
	}
	while (src[i])
		i++;
	return (i);
}

int				main(void)
{
	char src1[] = "bonjour";
	char dest1[] = "les amies";
	char src2[] = "bonjour";
	char dest2[] = "les amies";
	char src3[] = "bonjour";
	char dest3[] = "les amies";
	char src4[] = "bonjour";
	char dest4[] = "les amies";

	printf("######## MON STRLCPY ##########\n");
	printf("src1 est : %s\n", src1);
	printf("dest1 est : %s\n", dest1);
	printf("1 - RESULTAT est : %u\n", ft_strlcpy(dest1, src1, 4));
	printf("src2 est : %s\n", src2);
	printf("dest2 est : %s\n", dest2);
	printf("2 - RESULTAT est : %u\n", ft_strlcpy(dest2, src2, 3));
	printf("src3 est : %s\n", src3);
	printf("dest3 est : %s\n", dest3);
	printf("3 - RESULTAT est : %u\n", ft_strlcpy(dest3, src3, 1));
	printf("src4 est : %s\n", src4);
	printf("dest4 est : %s\n", dest4);
	printf("4 - RESULTAT est : %u\n", ft_strlcpy(dest4, src4, 2));


	char src1[] = "";
	char dest1[] = "les amies";
	char src2[] = "bonjour";
	char dest2[] = "";

	char src1b[] = "";
	char dest1b[] = "les amies";
	char src2b[] = "bonjour";
	char dest2b[] = "";

	printf("######## VRAI STRLCPY ##########\n");
	printf("src1b est : %s\n", src1);
	printf("dest1b est : %s\n", dest1);
	printf("1 - RESULTAT est : %lu\n", strlcpy(dest1, src1, 10));
	printf("src2b est : %s\n", src1);
	printf("dest2b est : %s\n", dest1);

  printf("src2b est : %s\n", src2);
	printf("dest2b est : %s\n", dest2);
	printf("2 - RESULTAT est : %lu\n", strlcpy(dest2, src2, 3));
	printf("src2b est : %s\n", src2);
	printf("dest2b est : %s\n", dest2);


  printf("######## MON STRLCPY ##########\n");
	printf("src1b est : %s\n", src1b);
	printf("dest1b est : %s\n", dest1b);
	printf("1 - RESULTAT est : %lu\n", ft_strlcpy(dest1b, src1b, 10));
	printf("src2b est : %s\n", src1b);
	printf("dest2b est : %s\n", dest1b);

  printf("src2b est : %s\n", src2b);
	printf("dest2b est : %s\n", dest2b);
	printf("2 - RESULTAT est : %lu\n", ft_strlcpy(dest2b, src2b, 3));
	printf("src2b est : %s\n", src2b);
	printf("dest2b est : %s\n", dest2b);

	return (0);
}