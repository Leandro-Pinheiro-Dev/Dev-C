#include <stdio.h>
	char option1;
	char option2;
	char option3;
	char option4;
	
int main()
 {

    float valor_bolsa;
	float desconto;

    printf("Valor da bolsa = ");
    scanf("%f", &valor_bolsa);

    printf("Paga aluguel? [s/n] = ");
    scanf("%s", &option1);

    printf("Come na Escola? [s/n] = ");
    scanf("%s", &option2);
    
    printf("Tem cota de Fotocopias?[s/n] = ");
    scanf("%s", &option3);

    printf("Usa estacionamento?[s/n] = ");
    scanf("%s", &option4);
    
    if (option1 == 's' && option2 == 's') 
	{
  		printf("15%% valor desconto R$%.2f\nValor da bolsa com desconto R$%.2f",valor_bolsa -(valor_bolsa * 0.85),valor_bolsa * 0.85);
  	}
  	else if (option3 == 's' || option4 == 's') 
	{
  		printf("8%% valor desconto R$%.2f\nValor da bolsa com desconto R$%.2f",valor_bolsa -(valor_bolsa * 0.92),valor_bolsa * 0.92);
  	}
    else if (option1 == 's' || option2 == 's') 
	{
  		printf("15%% valor desconto R$%.2f\nValor da bolsa com desconto R$%.2f",valor_bolsa -(valor_bolsa * 0.90),valor_bolsa * 0.90);
  	}
}
