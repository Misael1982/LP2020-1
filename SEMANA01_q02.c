#include <stdio.h>

int main() {
  int n1, n2;
  int n1menor, n1maior;
  int n2menor, n2maior;
  

  printf("Digite o primeiro numero\n");
  scanf("%i",&n1);
  printf("Digite o segundo numero\n");
  scanf("%i",&n2);

  
  n1menor = (n1-1);
  n1maior = (n1+1);
  n2menor = (n2-1);
  n2maior = (n2+1);
  

  if(n1<=n2){
    printf ("%i %i %i %i %i %i", n1menor, n1, n1maior,n2menor, n2, n2maior);
    
  }
  else
    printf ("%i %i %i %i %i %i", n2menor, n2, n2maior, n1menor, n1, n1maior);

  return 0;
}