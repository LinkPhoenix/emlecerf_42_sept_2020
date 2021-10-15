char	*ft_strdup(char *src)
{
	int		src_len;
	int		i;
	char	*str;

	src_len = 0;
	i = 0;
	while (src[src_len])
		src_len++;
	if (!(str = (char*)malloc(sizeof(*str) * (src_len + 1))))
		return (0);
	while (i < src_len)
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int		main(int argc, char *argv[])
{
	int i;
	int j;

	i = 1;
	j = 1;
  printf("\033[0;33mMY STRDUP\n\033[0m");
	while ( i < argc)
	{
		printf("The argument \033[0;33m%d\033[0m do \033[0;32m\"%s\"\033[0m with my strdup\n",i ,ft_strdup(argv[i]));
		i++;
	}

	printf("###################################################\n");
  printf("\033[0;33mTHE REAL STRDUP\n\033[0m");
	while ( j < argc)
	{
		printf("The argument \033[0;33m%d\033[0m do \033[0;32m\"%s\"\033[0m with the real strdup\n",j ,strdup(argv[j]));
		j++;
	}
	return (0);
}