#include <stdio.h>

int main()
 {
    int PGL, CE, CF, UE; //PGL paga aluguel, CE come na Escola, CF tem cota fotocopias, UE usa estacionamento
    float VB,VD,vb;//vb valor de bolsa, VD valor de desconto, VB resultado do valor inicial - desconto

    printf("Valor da bolsa = ");
    scanf("%f", &vb);

    printf("Paga aluguel? (1 para sim, 2 para nao) = ");
    scanf("%d", &PGL);

    printf("Come na Escola? (1 para sim, 2 para nao) = ");
    scanf("%d", &CE);

    printf("Tem cota de Fotocopias? (1 para sim, 2 para nao) = ");
    scanf("%d", &CF);

    printf("Usa estacionamento? (1 para sim, 2 para nao) = ");
    scanf("%d", &UE);

    if (PGL == 1 && CE == 1) 
	{
        VB = vb * 0.85;// valor com desconto
        VD =vb-VB;// valor do desconto
  		printf("15 %% valor de desconto R$ %.2f\n", VD);
    } 
	else if (CF == 1 && UE == 1) 
	{
        VB = vb * 0.92;
        VD =vb-VB;
    	printf("8 %% valor de desconto R$ %.2f\n", VD);
    } 
	else if (PGL == 1 || CE == 1) {
        VB = vb * 0.90;
        VD =vb-VB;
        printf("10 %% valor de desconto R$ %.2f\n", VD);
    }

    printf("O valor da bolsa com desconto R$ %.2f\n", VB);
    
    return 0;
}

