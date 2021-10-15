#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int		check_base(char *base)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (base[i] == '\0' || base[i + 1] == '\0')
		return (0);
	while (base[i])
	{
		j = i + 1;
		if (base[i] == '-' || base[i] == '+')
			return (0);
		while (base[i] == base[j])
			return(0);
		while (base[i] != base[j])
			j++;
		i++;
	}
	return (1);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int i;
	char list[32];

	i = 0;
	if (check_base(base))
	{
		while (nbr > 0)
		{
			list[i] = base[nbr % ft_strlen(base)];
			nbr = nbr / (ft_strlen(base));
			i++;
		}
		while (--i >= 0)
			ft_putchar(list[i]);
	}
}

int	main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("\033[1;31mERROR\n\033[0m");
		return (1);
	}
	//char commande[BUFSIZ];

	//sprintf(commande, "echo 'base=%s;%s' | bc", argv[2], argv[1]);
	//system(commande);
	ft_putnbr_base(atoi(argv[1]), argv[2]);
  	//printf("Mon putnbr base donne :\n");
	//printf("echo 'base=%s;%s' | bc\n%d\n",argv[1], argv[2], system(commande));

	//int putnbr_base[100] = ft_putnbr_base(atoi(argv[1]), argv[2]);
	//int echo_base[100] = printf("echo 'base=%s;%s' | bc\n%d\n",argv[1], argv[2], system(commande));
	//printf("putnbr %s\n", putnbr_base);
	//printf("echo_base %s\n", echo_base);
	//if ((ft_putnbr_base(atoi(argv[1]), argv[2]) == system(commande)))
    //    printf("\033[1;32mOK :)\n\033[0m");
	//else
    //    printf("\033[1;31mKO :(\n\033[0m");
	return(0);
}