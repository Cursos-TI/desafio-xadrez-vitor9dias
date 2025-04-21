#include <stdio.h>

void recursivotorre(int torre){
    if(torre > 0){
        printf("Direita\n");
        recursivotorre(torre-1);
    }
}

void recursivobispo(int bispo){
    if(bispo >0 ){
        printf("Cima, Direita\n");
        recursivobispo(bispo-1);
    }
}

void recursivorainha(int rainha){
    if(rainha > 0){
        printf("Esquerda\n");
        recursivorainha(rainha-1);
    }
}


 int main(){
int a=1 , i=1, j=1, quantidadetorre=5, quantidadebispo=5, quantidaderainha=8;

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
    printf("\n");
    printf("\n");

    printf("** Movimentação da Torre**\n"); // Mudando a movimentação da torre de loop simples para recursiva
     recursivotorre(quantidadetorre);
    printf("\n");


    printf("**Moviment da Torre**\n"); // /Mudando a movimentação para recursiva
     recursivobispo(quantidadebispo);
     printf("\n");

     printf("**Movimentação da Rainha**"); //Mudando a movimentação para recursiva
     recursivorainha(quantidaderainha);
     printf("\n");
 
printf("**Movimentação do Cavalo**\n"); //uso de loop aninhado 
for(int a=0; a<=0;a++){
    for(int b=1; b<=2; b++){
        printf("Baixo\n");
    }printf("Esquerda\n");
} printf("\n");

    printf("**Movimentação Bispo**\n"); // uso de loop aninhado 
    for(int a=1; a<=5; a++){
        for(int b= 5; b<=5; b++){
            printf("Direita\n");
        }printf("Cima\n");

    }
    


    return 0;
 }