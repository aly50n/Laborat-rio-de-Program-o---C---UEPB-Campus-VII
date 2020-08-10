<<<<<<< HEAD
/* 
2.A seguinte sequência de números 0 1 1 2 3 5 8 13 21... é conhecida 
como a série de Fibonacci. Nesta sequência, cada número, depois dos 
2 primeiros, é igual à soma dos 2 anteriores. Escreva um programa que 
leia um inteiro N (N < 46) e que mostre os N primeiros números dessa 
série, na sequência de um número por linha.
*/
#include <stdio.h>

int main(){
    
    int num,i,aux=0,aux2=1,aux3=0;
    
    printf("Digite um numero inteiro menor que (46):");
    scanf("%d",&num);
    
    while(num >= 46 ) {
        printf("O numero deve ser menor que (46), tente outro número:");
        scanf("%d",&num); }
        
    printf("FIBONACCI \n");
    
    for(i=0;i<num;i++){
        aux3=aux+aux2;
        aux=aux2;
        aux2=aux3;
        printf("%d \n",aux3); }

=======
#include <stdio.h>

int main(){
    
    int num,i,aux=0,aux2=1,aux3=0;
    
    printf("Digite um numero inteiro menor que (46):");
    scanf("%d",&num);
    
    while(num >= 46 ) {
        printf("O numero deve ser menor que (46), tente outro número:");
        scanf("%d",&num); }
        
    printf("FIBONACCI \n");
    
    for(i=0;i<num;i++){
        aux3=aux+aux2;
        aux=aux2;
        aux2=aux3;
        printf("%d \n",aux3); }

>>>>>>> e77ce8b9a8ae2c1f614cc46d7fda289c3dc3fac2
    return 0; }