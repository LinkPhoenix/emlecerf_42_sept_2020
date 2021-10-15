#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
    i++;
	}
	return (dest);
}

int		main(void)
{
	char dest1[] = "bonjour";
	char src1[] = "les";

  printf("### Le VRAI STRNCPY\n");

	printf("strncpy(dest1, src1, 4)\n%s\n", strncpy(dest1, src1, 4));

  char dest2[] = "bonjour";
	char src2[] = "les";

  printf("strncpy(dest2, src2, 3)\n%s\n", strncpy(dest2, src2, 3));

  printf("### Mon STRNCPY\n");

	char dest1b[] = "bonjour";
	char src1b[] = "les";
	printf("ft_strncpy(dest1b, src1b, 4)\n%s\n", ft_strncpy(dest1b, src1b, 4));

  	char dest2b[] = "bonjour";
	char src2b[] = "les";
	printf("ft_strncpy(dest2b, src2b, 3)\n%s\n", ft_strncpy(dest2b, src2b, 3));

	return (0);
}