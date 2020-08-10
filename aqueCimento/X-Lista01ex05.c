/*
5- Construa um programa que receberá 100 números inteiros. 
Utilizando apenas um único vetor, o seu programa deverá ordenar os valores 
lidos em ordem crescente. Ao final, o programa deverá realizar a impressão 
dos números ordenados (um por linha).
*/

#include <stdio.h>

int main()
{
    int vetor[5], i, j, aux;
    for (i=0; i < 5; i++){
        printf("Digite o %dº número do seu vetor: ", i + 1);
        scanf("%d", &vetor[i]);
    }
    
    printf("O seu vetor é: ");
    for (i=0; i < 5; i++){
        printf("[%d], ",vetor[i]);
    }
    
    for (i=0; i < 5; i++){
        for (j=0; j < 5; j++){
            if (vetor[i] < vetor[j]){
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }

    printf("\n O seu vetor em ordem crescente é: ");
    for (i=0; i < 5; i++){
        printf("[%d], ",vetor[i]);
    }
    return 0;
}