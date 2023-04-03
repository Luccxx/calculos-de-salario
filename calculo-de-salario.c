#include <stdio.h>
#include <stdlib.h> 
#include <locale.h>

int main() { setlocale(LC_ALL, ""); int opcao, meses; float salario;

while(opcao!=4){
    printf("\n\t---MENU DE OPÇÕES---\n(1) NOVO SALÃRIO\t(2)FÉRIAS\n(3)DÉCIMO TERCEIRO\t(4)SAIR\n->");
    scanf("%d", &opcao);
    if(opcao>4){
        printf("Opção Invalida! Informe uma opção válida");
    }
    switch(opcao){
        case 1:
            printf("\t---NOVO SALÁRIO---\nInforme seu salário:\n->R$");
            scanf("%f", &salario);
            if(salario<=350){
                printf("Seu novo salário é R$%.2f", salario + (salario * 0.15));
            }else if(salario<=600){
                printf("Seu novo salário é R$%.2f", salario + (salario * 0.10));
            }else if(salario>600){
                printf("Seu novo salário é R$%.2f", salario + (salario * 0.05));
            }
        break;
        case 2:
        	printf("\t---FÉRIAS---\nInforme seu salário:\n->R$");
        	scanf("%f", &salario);
        	printf("Seu salário férias é R$%.2f", salario + (salario/3));
        break;
        case 3:
        	printf("\t---DÉCIMO TERCEIRO---\nInforme seu salário:\n->R$");
        	scanf("%f", &salario);
        	printf("Informe o número de meses trabalhados:\n->");
        	scanf("%d", &meses);
        	while(meses>12){
        		printf("Opção Invalida");
        		printf("\nInforme o número de meses trabalhados:\n->");
        		scanf("%d", &meses);
			}
			printf("Seu 13º é R$%.2f", (salario * meses)/12);				
        break;
        case 4:
        break;

    }
    
}
