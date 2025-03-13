#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
  
  for (int i = 0; i < 5; i++)
  {
    printf("bispo: cima direita \n");
  }
  
  for (int i = 0; i < 5; i++)
  {
    printf("torre: direita \n");
  }
  
  for (int i = 0; i < 8; i++)
  {
    printf("rainha: esquerda \n");
  }

  int cavalo = 1;

  while (cavalo--)
  printf("cavalo:");
  {
    for (int i = 0; i < 3; i++)
    {
      printf("cima ");
      i++;
    }
    printf("direita ");
  }
  
  

    return 0;
}
