#include <stdio.h>
 int main(){
int a=1 , i=1, j=1;

    printf("**Movimentação da Torre**\n");
        while(i<=5){                    // repetição da movimentação da Torre
    printf("Direita\n");
        i++;
    } printf("\n");

    printf ("**Moivimentação do Bispo**\n");
        do{ (a<=5);                    // repetição do movimento do Bispo
      printf("Cima e Direita \n");
        // repetição do movimento do Bispo
        a++;
        }  while (a<=5);
        printf("\n");
        
    printf("**Movimentação da rainha**\n");
        for(i=1; i<=8; i++){          // repetiçao do movimento da Rainha
        printf("Esquerda\n");
        }printf("\n");


     printf("**Movimentação do Cavalo**\n");
        for(int c = 1; c<=1; c++){   //repetição do esquerda uma vez
            while(j<=2){             //repetição do baixo duas vezes 
                j++;
            printf("Baixo\n");
            }

        printf("Esquerda\n");
    }printf("\n");





    return 0;
 }
