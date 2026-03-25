#include <stdio.h>
int main(){
    
int numero1, numero2, opcao, soma, subtracao;
char sair;

do{

printf("Digite um numero\n");
scanf("%d" , &numero1);
printf("Digite outro numero\n");
scanf("%d" , &numero2);

printf("------------------Opções-------------\n");
printf("-------------------1-Soma-------------\n");  
printf("-----------------2-Subtração-------------\n");     
printf("------------------3-Sair-------------\n");     
    
printf("Qual opção deseja?\n");    
scanf("%d" , &opcao);    
    
switch(opcao){
    case 1:
        soma = numero1 + numero2;
        printf("A soma é igual a: %d\n" , soma);
        break;
    case 2:
        subtracao = numero1 - numero2;
        printf("O resultado da subtração é: %d\n" , subtracao);
        break;
    case 3:
        printf("Saindo...\n");
        return 0;
    default:
        printf("Opção invalida!\n");
} 
printf("Deseja sair? s/n\n");
scanf(" %c" , &sair);
} while (sair != 's' && sair != 'S');

printf("Saindo...");
    
return 0;    
    
}
