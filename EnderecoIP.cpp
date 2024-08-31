#include <stdio.h>
#include<locale.h>

int main()
 {
 	setlocale(LC_ALL,"portuguese");
 	
    int octeto1, octeto2, octeto3, octeto4;

    printf("Digite o primeiro octeto do endereço IP: ");
    scanf("%d", &octeto1);
    if (octeto1 == 0 || octeto1 > 255) {
        printf("\nClasse inválida.\n");
        return 0;
    }

    printf("Digite o segundo octeto do endereço IP: ");
    scanf("%d", &octeto2);
    if (octeto2 == 0 || octeto2 > 254) {
        printf("\nO segundo octeto está fora do intervalo válido.\n");
        return 0;
    }

    printf("Digite o terceiro octeto do endereço IP: ");
    scanf("%d", &octeto3);
    if (octeto3 == 0 || octeto3 > 254) {
        printf("\nO terceiro octeto está fora do intervalo válido.\n");
        return 0;
    }

    printf("Digite o quarto octeto do endereço IP: ");
    scanf("%d", &octeto4);
    if (octeto4 == 0 || octeto4 > 254) {
        printf("\nO quarto octeto está fora do intervalo válido.\n");
        return 0;
    }

    printf("Endereço IP digitado: %d.%d.%d.%d\n", octeto1, octeto2, octeto3, octeto4);

    int primeiro_octeto = octeto1;
    if (primeiro_octeto == 127) {
        printf("Endereço localhost.\n");
    } else if (1 <= primeiro_octeto || primeiro_octeto <= 126) {
        printf("Classe A\n");
    } else if (128 <= primeiro_octeto || primeiro_octeto <= 191) {
        printf("Classe B\n");
    } else if (192 <= primeiro_octeto || primeiro_octeto <= 223) {
        printf("Classe C\n");
    } else if (224 <= primeiro_octeto || primeiro_octeto <= 239) {
        printf("Classe D\n");
    } else if (240 <= primeiro_octeto || primeiro_octeto <= 255) {
        printf("Classe E\n");
    } else {
        printf("Classe inválida\n");
    }

    return 0;
}


