#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

int	main(void)
{
	int a;
	int b;

	a = 54;
	b = 36;
  printf("### Valeur de a et b avant traitement\n");
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	ft_swap(&a, &b);
  printf("### Valeur de a et b apres traitement\n");
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	return (0);
}