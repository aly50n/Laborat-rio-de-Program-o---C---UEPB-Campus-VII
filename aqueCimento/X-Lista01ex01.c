<<<<<<< HEAD
/* 
1.Construa um programa que receba um número e que verifique se ele é primo. 
Relembrando: números primos são divisíveis apenas por 1 e por ele mesmo. Se o número 
recebido pelo programa for primo, o programa deve imprimir número é primo. Caso contrário, 
a mensagem será: número não é primo.
*/
#include <stdio.h>

int main()
{
    int numero,i,cont=0;
    printf("Digite um número para determinarmos se ele é ou não primo: ");
    scanf("%d", &numero);
    for(i=1; i <= numero; i++)
    {
        if (numero%i == 0)
            { cont = cont + 1; }
    }
    if (cont == 2)
    {
        printf("O número %d é primo", numero);
    }
    else
    {
        printf("O número %d não é primo", numero);
    }
    return 0;
}
=======
#include <stdio.h>

int main()
{
    int numero,i,cont=0;
    printf("Digite um número para determinarmos se ele é ou não primo: ");
    scanf("%d", &numero);
    for(i=1; i <= numero; i++)
    {
        if (numero%i == 0)
            { cont = cont + 1; }
    }
    if (cont == 2)
    {
        printf("O número %d é primo", numero);
    }
    else
    {
        printf("O número %d não é primo", numero);
    }
    return 0;
}
>>>>>>> e77ce8b9a8ae2c1f614cc46d7fda289c3dc3fac2
