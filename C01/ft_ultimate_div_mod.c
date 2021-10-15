#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int div;
	int mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

int main(void)
{
  int a;
  int b;

  a = 23;
  b = 10;

  printf("### Valeur de a et b avant traitement\n");
  printf("a = %d\nb = %d\n", a, b);
  printf("\n");
  ft_ultimate_div_mod(&a, &b);
  printf("\n");
  printf("### Valeur de a et b apres traitement\n");
  printf("a = %d\nb = %d\n", a, b);
  return (0);
}