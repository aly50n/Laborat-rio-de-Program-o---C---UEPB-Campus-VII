<<<<<<< HEAD
/*
3.	Construa um programa que receba um número qualquer 
e que apresente todos os números primos de 1 até o número 
informado, um abaixo do outro. Números primos são números 
divisíveis apenas por 1 e por ele mesmo.
*/
#include <stdio.h>

int main()
{
    int num, i, j, cont=0;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);
    
    printf("Os números primos existentes até o número digitado são: ");
    for(i=1; i<=num; i++)
    {
        for(j=1; j<=num; j++)
        {
            if(i % j == 0)
            {
                cont= cont + 1;
            }
        }
        if(cont == 2)
        {
            printf("%d ",i);
        }
        cont = 0;
    }
    return 0;
}
=======
#include <stdio.h>

int main()
{
    int num, i, j, cont=0;

    printf("Digite um número inteiro:");
    scanf("%d", &num);
    
    printf("Os números primos existentes até o número digitado são: ");
    for(i=1; i<=num; i++)
    {
        for(j=1; j<=num; j++)
        {
            if(i % j == 0)
            {
                cont= cont + 1;
            }
        }
        if(cont == 2)
        {
            printf("%d ",i);
        }
        cont = 0;
    }

    return 0;
}
>>>>>>> e77ce8b9a8ae2c1f614cc46d7fda289c3dc3fac2
