#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int main()
{
  int a;
  int b;
  int div;
  int mod;

  a = 23;
  b = 10;
  div = 4556;
  mod = 5464;


  printf("### Valeur de a et b avant traitement\n");
  printf("a = %d\nb = %d\n", a, b);
  printf("### Valeur de div et mod avant traitement\n");
  printf("div = %d\nmod = %d\n", div, mod);
  printf("\n");
  ft_div_mod(a, b, &div, &mod);
  printf("\n");
  printf("### Valeur de a et b apres traitement\n");
  printf("a = %d\nb = %d\n", a, b);
  printf("### Valeur de div et mod apres traitement\n");
  printf("div = %d\nmod = %d\n", div, mod);
  return (0);
}