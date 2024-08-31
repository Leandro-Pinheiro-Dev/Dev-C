#include<stdio.h>
main()
{
	float Qc,Qd,Td;
	printf("Digite quantidade Qc =");
	scanf("%f",&Qc);
	printf("Digite quantidade Qd=");
	scanf("%f",&Qd);
	Td = Qc*Qd;
	printf("\ntotal de divisoes = %0.f",Td);
	return 0;
}
