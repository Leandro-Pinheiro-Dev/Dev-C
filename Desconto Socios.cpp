#include<stdio.h>
main()
{
	int idade; float PI,PF,DP;
	printf("digite Preco incial\n");
	scanf("%f",&PI);
	printf("digite idade\n");
	scanf("%d",&idade);
	printf("tem depentente");
	scanf("%d",&DP);
	
	if(DP=='S'){
	PF=PF+70.00;}
	else if(DP=='n'){
	PF=PF*0.07;}
	
	if (idade<18){
	PF=PI*1.08;}
	else if (idade<=30){
	PF=PI*1.11;}
	else if (idade<=50){
	PF=PI*1.14;}
	else{
	PF=PI*1.22;}
	
	printf("Preco Final=%.2f",PF);
}
