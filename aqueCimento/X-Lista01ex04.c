<<<<<<< HEAD
/*
4.	Construa um programa que receberá 100 valores inteiros. Ao final, o algoritmo 
irá imprimir o menor valor recebido. O índice em que o menor valor está armazenado. 
Por último, os valores armazenados nas posições imediatamente anterior e posterior 
ao menor elemento encontrado. Obedeça o seguinte formato para apresentar as informações:

Menor valor recebido: 10
Índice do menor valor: 19
Valor armazenado na posição anterior [18]: 12 
Valor armazenado na posição posterior [20]: 34

Caso o menor valor esteja na primeira posição, seu algoritmo não deve imprimir a linha 
correspondente ao elemento anterior e se estiver na última posição, não deve imprimir 
o elemento posterior.
*/
#include <stdio.h>

int main()
{
    int vetor[100], i,menor_num, indice = 0;
    
    printf("Digite o 1º valor: ");
    scanf("%d", &vetor[0]);
    menor_num= vetor[0];
    
    for(i=1; i < 100; i++)
    {
        printf("Digite o %dº valor: ", i + 1);
        scanf("%d", &vetor[i]);
        if (vetor[i] < menor_num)
        {
            menor_num= vetor[i];
            indice = i;
        }
        
    }
    if (indice == 0)
    {
        printf("Menor valor recebido: %d", menor_num);
        printf("indice do menor valor recebido: [%d]", indice);
        printf("Não existe posição anterior.");
        printf("Valor armazenado na posição posterior[%d]: %d",indice + 1, vetor[indice + 1]);
    }
    else if (indice == 99)
    {
        printf("Menor valor recebido: %d", menor_num);
        printf("indice do menor valor recebido: [%d]", indice);
        printf("Valor armazenado na posição anterior[%d]: %d",indice - 1, vetor[indice - 1]);
        printf("Não existe posição posterior.");
    }
    else
    {
        printf("Menor valor recebido: %d", menor_num);
        printf("indice do menor valor recebido: [%d]", indice);
        printf("Valor armazenado na posição anterior[%d]: %d",indice - 1, vetor[indice - 1]);
        printf("Valor armazenado na posição posterior[%d]: %d",indice + 1, vetor[indice + 1]);
    }
    
    return 0;
=======
#include <stdio.h>

int main()
{
    int vetor[100], i,menor_num, indice = 0;
    
    printf("Digite o 1º valor: ");
    scanf("%d", &vetor[0]);
    menor_num= vetor[0];
    
    for(i=1; i < 100; i++)
    {
        printf("Digite o %dº valor: ", i + 1);
        scanf("%d", &vetor[i]);
        if (vetor[i] < menor_num)
        {
            menor_num= vetor[i];
            indice = i;
        }
        
    }
    if (indice == 0)
    {
        printf("Menor valor recebido: %d", menor_num);
        printf("indice do menor valor recebido: [%d]", indice);
        printf("Não existe posição anterior.");
        printf("Valor armazenado na posição posterior[%d]: %d",indice + 1, vetor[indice + 1]);
    }
    else if (indice == 99)
    {
        printf("Menor valor recebido: %d", menor_num);
        printf("indice do menor valor recebido: [%d]", indice);
        printf("Valor armazenado na posição anterior[%d]: %d",indice - 1, vetor[indice - 1]);
        printf("Não existe posição posterior.");
    }
    else
    {
        printf("Menor valor recebido: %d", menor_num);
        printf("indice do menor valor recebido: [%d]", indice);
        printf("Valor armazenado na posição anterior[%d]: %d",indice - 1, vetor[indice - 1]);
        printf("Valor armazenado na posição posterior[%d]: %d",indice + 1, vetor[indice + 1]);
    }
    
    return 0;
>>>>>>> e77ce8b9a8ae2c1f614cc46d7fda289c3dc3fac2
}