#include<stdio.h>
main()
{
	int idade;
	float precoinicial,precofinal;
	printf("digite o preco do livro\n");
	scanf("%f",&precoinicial);
	printf("digite a idade do cliente\n");
	scanf("%d",&idade);
    
    if(idade==15)
	{
    	precofinal=precoinicial*0.50;
    	printf("o preco do livro com desconto de 50 por cento:%.2f\n",precofinal);
	}
	else if(idade==18)
	{
   		precofinal=precoinicial*0.40;
   		printf("o preco do livro com desconto de 40 por cento:%.2f\n",precofinal);
	}
	else if(idade==30)
	{
   		precofinal=precoinicial*0.30;
    	printf("o preco do livro com desconto de 30 por cento:%.2f\n",precofinal);
	}
	else
	{
		printf("usuario nao qualificado a desconto");
	}
}
