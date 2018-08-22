#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int op;
	float num1, num2;
	
	puts("Uma simples calculadora:");
	puts("Escolha uma operacao \n1 + \n2 - \n3 * \n4 /");
	scanf("%d",&op);
	
	
	if(op==1){
		fflush(stdin);
		puts("Insira o primeiro numero a somar:");
		scanf("%f",&num1);	
		
		puts("Insira o segundo numero a somar:");
		scanf("%f",&num2);
		
		printf("Res: %2.2f", num1 + num2);
			}
			else
			if(op==2){
				fflush(stdin);
				puts("Insira o primeiro numero a subtrair:");
				scanf("%f",&num1);	
				
				puts("Insira o segundo numero a subtrair:");
				scanf("%f",&num2);
				
				printf("Res: %2.2f", num1 - num2);
					}else
					if(op==3){
						fflush(stdin);
						puts("Insira o primeiro numero a multiplicar:");
						scanf("%f",&num1);	
						
						puts("Insira o segundo numero a multiplicar:");
						scanf("%f",&num2);
						
						printf("Res: %2.2f", num1 * num2);
							}else
							if(op==4){
							fflush(stdin);
							puts("Insira o dividendo:");
							scanf("%f",&num1);	
							
							puts("Insira um divisor diferente de 0:");
							scanf("%f",&num2);
							
							if(num2!=0){
								printf("Res: %2.2f", num1 / num2);
							}else{
								printf("Dividendo Invalido\nBye!");
							}
							
							
							}else{
								printf("Opcao Invalida\nBye!");
							}
	printf("\nBye!");
	return 0;
}
