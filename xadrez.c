#include <stdio.h>


//lógica do movimento das peças:

//Torre

void movertorre(int casas) {
    if (casas > 0)
    {   
        printf("Direita!\n");
        movertorre(casas - 1);
    }
}

//Rainha

void movimento_rainha(int rainha) {
    if (rainha > 0)
    {   
        printf("Esquerda!\n");
        movimento_rainha(rainha - 1);
    }
   
}

//Bispo

void movimento_bispo (int bispo){
    for (int movimento_cima = 0; movimento_cima < 5; movimento_cima++)
    {
        printf("Cima, ");
        int movimento_direita = movimento_cima;
        while (movimento_direita == movimento_cima)
        {
            printf("direita\n");
            movimento_direita++;
        }
        
    }
    
}

//Cavalo

void movimento_Cavalo(int cavalo) {
    for (int cavalo_cima = 0; cavalo_cima == 0; cavalo_cima++)
    {
      printf("Cima, Cima, ");
      int cavalo_direita = cavalo_cima;
      while ( cavalo_direita == cavalo_cima)
      {
        printf("direita!\n");
        cavalo_direita++;
      }
      
    }
    
  }

//O que será mostrado no terminal:
    
int main () {
    printf("Movimento da Torre: \n");
    movertorre(5);
    printf("Fim do movimento da Torre! \n");
    printf("--------------------------------\n");
    printf("Movimento da Rainha: \n");
    movimento_rainha(8);
    printf("Fim do movimento da Rainha!\n");
    printf("--------------------------------\n");
    printf("Movimento do Bispo: \n");
    movimento_bispo(5);
    printf("Fim do movimento do bispo!\n");
    printf("--------------------------------\n");
    printf("Movimento do cavalo: \n");
    movimento_Cavalo(1);
    printf("Fim do movimento do cavalo! \n");

    return 0;
}
