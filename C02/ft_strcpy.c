#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (dest[i])
		dest[i] = '\0';
	return (dest);
}

int		main(void)
{
	char dest[] = "les";
	char src[] = "bonjour";

	printf("le vrai strcpy donne\n%s\n", strcpy(dest, src));

	char dest_bis[] = "bonjour";
	char src_bis[] = "les";
	printf("mon strcpy donne\n%s\n", ft_strcpy(dest_bis, src_bis));

	return (0);
}