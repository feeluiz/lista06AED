#include <stdio.h>
#include <stdlib.h>
#include "utils.h"

#define n  5
#define m  3


void questao01(){
    //1. Determinar o valor absoluto de 
    //um número informado pelo usuário.
    float num = __FLT_MIN__;
    printf("Digite um numero saber seu valor absoluto exp(-1.2): ");
    //le os dados do usuario
    scanf("%f,", &num);
    //a funcao pedida esta no arquivos utils.h valorAbsoluto
    printf("O valor absoludo de %0.2f eh: %0.2f\n", num, valorAbsoluto(num));
    gambiarra();
}

void questao02(){
    //2. Determinar o maior valor de 
    //um conjunto de 3 valores.
    int length = 3;
    float numeros[length];
    for (int index = 0; index < length; index++)
    {
        printf("digite  digite um numero real exp(1.2) : ");
        scanf("%f",&numeros[index]);
    }
    //a funcao pedida esta no arquivos utils.h valorAbsoluto    
    printf("\no maior  valor eh: %0.2f.\n", maiorValorDaLista(numeros, length));
    gambiarra();

}
void questao03(){
    //Imprimir um vetor de forma reversa.
    //int n = 5,
    int vetor[n];
    vetorRandomico(vetor,n);
    
    printf("Vetor normal \n");
    escreveVetorNormal(vetor, 5);
    
    printf("Vetor invertido \n");
    escreveVetorInvertido(vetor, 5);
    
    gambiarra();

}
void questao04(){
    //Determinaro menor e o maior valor 
    //de um vetor de inteiros de N posições.
    
    //int n = 5;
    int vetor[n];
    preencheVetorInteiro(vetor, n);
    escreveVetorNormal(vetor, n);
    MaiorMenordoVetor(vetor, n);
    gambiarra();

}
void questao05(){
    //Determinar a posição da primeira ocorrência de um elemento x
    int length = n,posicao = -1,x = -1;
    int vetor[length];
    printf("digite o numero inteiro procurado: ");
    scanf("%d", &x);
    preencheVetorInteiro(vetor, length);

    //funcao pedida firstIndexOf
    posicao = firstIndexOf(vetor, x, length);
    printf("%s %d.\n", posicao == -1? "nenhuma o correncia de:": "a primeira posicao eh :",posicao == -1 ? x : posicao);
    gambiarra();
}
void questao06(){
    //Determinar a posição da primeira ocorrência de um elemento x
    //int n = 5,
    int x = 0;
    int vetor[n], posicao[n];
    printf("digite o numero inteiro procurado: ");
    scanf("%d", &x);
    preencheVetorInteiro(vetor, n);
    AllIndexOf(vetor,posicao,x,n);
    escreveVetorIndex(posicao, n);
    gambiarra();
}
void questao07(){
    //Ordenar um vetor de N posições.
    //int n = 5;
    int vetor[n];

    vetorRandomico(vetor, n);
    printf("Vetor normal.\n");
    escreveVetorNormal(vetor, n);
    ordenarVetor(vetor,n);
    printf("Vetor Ordenado de forma crescente.\n");
    escreveVetorNormal(vetor, n);
    
    gambiarra();
}
void questao08(){
    //Determinar o maior e o menor valor de 
    //uma matriz de inteiros de NxM posições.
    //int n= 3,m = 3;
    int matriz[n][m];

    matrizRandomico(n, m,matriz);
    escreveMatriz(n, m,matriz);
    MenorMaiorMatriz(n, m, matriz);
    
    gambiarra();


}
void questao09(){
    //Determinar a posição (i,j) da primeira ocorrênciade 
    //um elemento x numa matriz de inteiros de NxM posições 
    //(considere a possibilidade do elemento não existir).
    //int n= 3,m = 3;
    int x =-1;
    int matriz[n][m];

    printf("digite o numero inteiro procurado: ");
    scanf("%d", &x);

    matrizRandomico(n, m,matriz);
    escreveMatriz(n, m,matriz);
    firstIndexOfMatriz(x, n, m, matriz);
    
    gambiarra();

}
void questao10(){
    //Uma  função que retorna  o  n-ésimo  
    //termo  da  série  de  Fibonacci. 
    //A  posição  do  elemento da série deverá ser 
    //um parâmetro de entrada da função.

    int p =-1;

    printf("digite o numero posicao fibonacci procurada: ");
    scanf("%d", &p);
    //funcao pedida em utils
    printf("oh numero fibonacci na posicao: %d eh = %ld\n",p,fibonacci(p));
    gambiarra();

}