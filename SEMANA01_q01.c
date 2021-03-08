#include <stdio.h>

int main() {
  float vcompra;
  float valordesc;
  

  printf("digite o valor da compra: R$");
  scanf("%f", &vcompra);

  if (vcompra <= 100)
  {
    printf("R$ %.2f", vcompra);
  }
  
  else if (vcompra >100 && vcompra <=200)
  {
    valordesc = vcompra * 0.95;
    printf("R$ %.2f", valordesc);
  }
  else if (vcompra > 200)
  {
    valordesc = vcompra * 0.90;
    printf("R$ %.2f", valordesc);
  }
  return 0;
}