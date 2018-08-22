#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
float num1,num2;

void lerNumeros(){
	fflush(stdin);
		puts("Insira o primeiro numero:");
		scanf("%f",&num1);	
		
		puts("Insira o segundo numero:");
		scanf("%f",&num2);
}

float somar(float n1, int n2){	
	return n1+n2;
}

float subtrair(float n1, int n2){	
	return n1-n2;
}

float multiplicar(float n1, int n2){	
	return n1*n2;
}

float dividir(float n1, int n2){	
	return n1/n2;
}


int main(int argc, char *argv[]) {
	int op;
	
	puts("Calculadora:");
	puts("Escolha uma operacao \n1 + \n2 - \n3 * \n4 /");
	scanf("%d",&op);	
	
	if(op==1){
		lerNumeros();		
		printf("Res: %2.2f", somar(num1,num2));
			}
			else
			if(op==2){
				lerNumeros();					
				printf("Res: %2.2f", subtrair(num1,num2));
					}else
					if(op==3){
						lerNumeros();	
						printf("Res: %2.2f", multiplicar(num1,num2));
							}else
							if(op==4){
								lerNumeros();	
								if(num2!=0){
									printf("Res: %2.2f", dividir(num1,num2));
									}else{
										printf("Dividendo Invalido\nBye!");
									}
		}else{
				printf("Opcao Invalida\nBye!");
		}
	printf("\nBye!");
	return 0;
}
