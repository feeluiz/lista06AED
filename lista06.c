#include <stdio.h>
#include <stdlib.h>
#include "funcoes/questoes.h"
#define numExercicios 10

int main(){
    Menu();
    return 0;
}

void Menu(){
    int option = -1;
    printf("Bem vindo, a lista 06\n");
    
    do
    {
        printf("Escolha umas das opcoes abaixo\n");
        printf("digite 0 para sair.\n");
        for (int item = 1; item <= numExercicios; item++)
            printf("digite %d para o exercicio %d\n", item, item);        
        printf("escolha: ");
        scanf("%d,", &option);
        switch(option){
            case 0:
                printf("Bye...\n");
                break;
            case 1:
                questao01();
                break;
            case 2:
                questao02();
                break;
            case 3:
                questao03();
                break;
            case 4:
                questao04();
                break;
            case 5:
                questao05();
                break;
            case 6:
                questao06();
                break;
            case 7:
                questao07();
                break;
            case 8:
                questao08();
                break;
            case 9:
                questao09();
                break;
            case 10:
                questao10();
                break;
            default:
                printf("Opcao invalida.\n");
                break;
        }
    } while (option != 0);
    

}
