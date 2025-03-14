#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void moverBispo(int casas)
{

  if (casas > 0)
  {

    int bispo = 5;

    while (bispo--)

    {
      for (int i = 0; i < casas; i++)
      {
        printf("cima ");
        i++;
      }
      printf("direita \n");
    }

    moverBispo(casas - 1);
  }
}

void moverTorre(int casas)
{

  if (casas > 0)
  {

    moverTorre(casas - 1);

    printf("direita \n");
  }
}

void moverRainha(int casas)
{

  if (casas > 0)
  {

    moverRainha(casas - 1);

    printf("direita \n");
  }
}

void moverCavalo(int casas)
{

  if (casas > 0)
  {

    int cavalo = 1;

    while (cavalo--)

    {
      for (int i = 0; i < 3; i++)
      {
        printf("cima ");
        i++;
      }
      printf("direita ");
    }

    moverCavalo(casas - 1);
  }
}

int main()
{
  printf("bispo: \n");

  moverBispo(1);

  printf("torre: \n");

  moverTorre(5);

  printf("rainha: \n");

  moverRainha(8);

  printf("cavalo: \n");

  moverCavalo(1);

  return 0;
}