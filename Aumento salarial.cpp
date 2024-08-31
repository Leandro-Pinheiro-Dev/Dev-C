#include<stdio.h>
main()
{
	int idade;float sal;
	printf("Digite Salario\n");
	scanf("%f",sal);
	printf("Digite idade\n");
	scanf("%d",idade);
	
	if(sal<3000&&idade>50)sal-sal*1.10;
	else if(sal<=4000)sal=sal*1.05;
	else if(sal>4000)sal=sal*1.08;
	else if(sal>=5000&&idade<=30)sal=sal*1.07;
	else sal=sal*1.11;
	
	printf("salario com aumento=%.2f",sal);
	
}
