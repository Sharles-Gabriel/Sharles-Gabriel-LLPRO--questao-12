#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int elev(int x, int z) {
  int valor = 1;
  for(int i = 0; i < z; i++) {
  valor *= x;
}
    return valor;
}

int main() {
  int x, z, resultado;
  
  printf("O quadrado de x elevado a z\n");
  printf("___________________________\n");
  
  printf("Digite o valor de x: ");
  scanf("%d", &x);
  
  printf("Digite o valor de z: ");
  scanf("%d", &z);
  
  resultado = elev (x, z);
  
  printf("O valor de x elevado a z é: %d", resultado);
  
return 0;

}