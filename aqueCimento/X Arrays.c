/*Considerando o exemplo demonstrado no vídeo, bem como na imagem a seguir, 
trabalhando com Arrays. Crie um programa que permite o professor cadastrar 
e exibir as notas de duas turmas (turma 1 e turma 2) pelas quais é responsável. 
Cada turma possui exatamente 10 alunos e cada aluno possui 2 notas (referente à duas unidades). 
Crie uma matriz bidimensional para guardar o nome dos alunos de cada turma e uma outra matriz 
tridimensional para cadastrar as notas dos 10 alunos de cada turma. Por fim, exiba as informações 
referentes a cada turma, exibindo o número da turma (1 e 2), e os alunos com as respectivas notas. 
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char nomes_alunos[10][10][100];
    int i,j,k, notas[10][2][2];
    
    for (i = 0;i < 10; i++){
        for (j = 0;j < 2; j++){
            printf("Digite o nome do %d aluno da %d turma: ",i + 1, j + 1);
            gets (nomes_alunos[j][i]);
            for (k=0;k<2;k++){
                printf("Digite a %d nota dele: ", k + 1);
                scanf("%d", notas[i][j][k]);
            }
        }
        printf("\n \n");
    }
    
    
    for (i=0;i<10;i++){
        for (j=0;j<2;j++){
            printf("%s da Turma %d \n tirou: ",nomes_alunos[j][i], i + 1);
            for (k=0;k<2;k++){
                printf("%d", notas[i][j][k]);
            }
        }
        printf("\n \n");
    }
        
return 0;
}