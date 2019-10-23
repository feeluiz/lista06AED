#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void gambiarra(){
    // c eh bugado gambiarra pra argumentos bugados...
    printf("aperte enter 3x ate voltar ao menu.\n ");
    for(int i = 0; i <= 3; i++) getchar();
    //limpa a tela
    system("clear");
}
void vetorRandomico(int *vet,int length){
    srand(time(0));
    for (int index = 0; index < length; index++)
        vet[index] = 1 + rand() % 10;
}
float valorAbsoluto(float num){
    return num < 0 ? num * -1: num;
}
float maiorValorDaLista(float *arr, int length){
    float maior = arr[0];
        for (int index = 0; index < length; index++)
            maior = maior < arr[index] ? arr[index]: maior;
    return maior;
}
void escreveVetorInvertido(int *vet, int length){
    for (int index = (length - 1); index >= 0; index--)
        printf("item %d = %d \n", length - index - 1, vet[index]);
}
void escreveVetorNormal(int *vet, int length){
    for (int index = 0; index < length; index++)
        printf("item %d = %d \n", index, vet[index]);
}

void MaiorMenordoVetor(int *vet, int length){
    int maior= vet[0], menor =  vet[0];
    for (int index = 0; index < length; index++)
    {   
        int currentValue = vet[index];
        maior  = maior < currentValue? currentValue : maior;
        menor = menor > currentValue? currentValue : menor;
    }
    printf("O maior valor eh: %d, e o menor eh: %d \n", maior, menor);
}
void preencheVetorInteiro(int *vet, int length){
    for (int index = 0; index < length; index++)
    {
        printf("digite um numero inteiro: ");
        scanf("%d",&vet[index]);
    }
}

int firstIndexOf(int *vet, int value, int length){
    for (int index = 0; index < length; index++)
        if(vet[index] == value) return index;
    return -1;
}
void AllIndexOf(int *vet,int *posicao, int value, int length){
    int pos= 0;
    for (int index = 0; index < length; index++)
        if(vet[index] == value) posicao[index] = index;
        else posicao[index] = -1;

}
void escreveVetorIndex(int *vet, int length){
    int cont = 0;
    for (int index = 0; index < length; index++)
        if( vet[index] > -1)printf("posicao = %d \n", index, vet[index], cont++);
    if(cont == 0) printf("nenhuma ocorrencia desse valor!\n");
}
void ordenarVetor(int *vet,int length){
    for (int rep = 0; rep <  length * length; rep++)
        for (int index = 0; index <  length; index++)
            if(vet[index] > vet[index < (length - 1) ? index + 1: index]){
                int currentValue = vet[index];
                vet[index] = vet[index + 1];
                vet[index + 1] = currentValue;
            }
}
void matrizRandomico(int linhas, int colunas,int (*matriz)[colunas]){
    srand(time(0));
    for (int lin = 0; lin < linhas; lin++)
        for (int col = 0; col < colunas; col++)
            matriz[lin][col] = 1 + rand() % 10;
    
}
void escreveMatriz(int linhas, int colunas,int (*matriz)[colunas]){
    for (int lin = 0; lin < linhas; printf("\n") ,lin++)
        for (int col = 0; col < colunas; col++)
            printf("%d |", matriz[lin][col]);
}
void firstIndexOfMatriz(int value,int linhas, int colunas,int (*matriz)[colunas]){
    int i= -1,j = -1;
    for (int lin = 0; lin < linhas; printf("\n") ,lin++)
        for (int col = 0; col < colunas; col++)
            if (matriz[lin][col] == value)
            {
                i = lin;
                j = col;           
                break;
            }
        
    if(i == -1) printf("nenhuma ocorrencia do valor: %d\n",value);
    else printf("a posicao i: %d, j: %d.\n", i, j);

            
}

void MenorMaiorMatriz(int linhas, int colunas,int (*matriz)[colunas]){
    int maior= matriz[0][0],menor = matriz[0][0];
    for (int lin = 0; lin < linhas;printf("\n") ,lin++)
        for (int col = 0; col < colunas; col++)
        {
            int currentValue = matriz[lin][col];
            maior  = maior < currentValue? currentValue : maior;
            menor = menor > currentValue? currentValue : menor;
        }

    printf("O maior valor eh: %d, e o menor eh: %d \n", maior, menor);
}
long fibonacci(int posicao){
    long ultimo= 0 , penultimo = 0,result = 0;
    
    if (posicao == 1) return 0;
    for (int i = 2; i <= posicao; i++)
    {
        result = ultimo == 0 ? 1 : penultimo + ultimo;
        penultimo = ultimo;
        ultimo = ultimo == 0? 1 : result;
    }
    return result;

}