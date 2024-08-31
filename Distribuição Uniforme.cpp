#include <stdio.h>
#include <math.h>
#include <locale.h>

double calcular_probabilidade(double a, double b, double c, double d) {
    // Verifica se o denominador é zero para evitar divisão por zero
    if (b - a == 0) {
        printf("Não é possível calcular a probabilidade: divisão por zero.\n");
        return 0.0;
    }
    // Verifica se c é maior que d para evitar erros
    if (c > d) {
        printf("Erro: O limite inferior [c] não pode ser maior que o limite superior [d].\n");
        return 0.0;
    }
    // Verifica se b é menor que a para evitar erros
    if (b < a) {
        printf("Erro: O limite inferior [a] não pode ser maior que o limite superior [b].\n");
        return 0.0;
    }
    // Verifica se c está dentro do intervalo [a, b]
    if (c < a || d > b) {
        printf("Erro: Os limites de probabilidade [c, d] devem estar dentro do intervalo [a, b].\n");
        return 0.0;
    }
    // Calcula a probabilidade e retorna o valor
    double probabilidade = ((d - c) / (b - a)) * 100.0;
    if (c == d) {
        printf("A probabilidade para x = %.2f é igual a zero.\n", c);
    }
    return probabilidade;
}

double calcular_media(double a, double b) {
    // Verifica se b é maior que a para evitar erros
    if (b < a) {
        printf("Erro: O limite inferior [a] não pode ser maior que o limite superior [b].\n");
        return 0.0;
    }
    return (a + b) / 2.0;
}

double calcular_desvio_padrao(double a, double b) {
    // Verifica se b é maior que a para evitar erros
    if (b < a) {
        printf("Erro: O limite inferior [a] não pode ser maior que o limite superior [b].\n");
        return 0.0;
    }
    return sqrt(pow(b - a, 2) / 12.0);
}

double calcular_variancia(double a, double b) {
    // Verifica se b é maior que a para evitar erros
    if (b < a) {
        printf("Erro: O limite inferior [a] não pode ser maior que o limite superior [b].\n");
        return 0.0;
    }
    return pow(b - a, 2) / 12.0;
}

double calcular_coeficiente_variacao(double desvio_padrao, double media) {
    if (media == 0) {
        printf("Não é possível calcular o coeficiente de variação: média igual a zero.\n");
        return 0.0;
    }
    return (desvio_padrao / media) * 100.0;
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    double a, b, c, d;
    int opcao;
    char continuar;

    do {
        printf("Selecione a opção que deseja calcular:\n");
        printf("1. Probabilidade\n");
        printf("2. Média\n");
        printf("3. Desvio Padrão\n");
        printf("4. Variância\n");
        printf("5. Coeficiente de Variação\n");
        printf("Opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: {
                printf("DICA: P(X=K)=0 ou seja (C=D)= 0\n");
                printf("\nDigite o limite do intervalo [a]: ");
                scanf("%lf", &a);
                printf("Digite o limite do intervalo [b]: ");
                scanf("%lf", &b);
                printf("Digite o limite do intervalo [c]: ");
                scanf("%lf", &c);
                printf("Digite o limite do intervalo [d]: ");
                scanf("%lf", &d);
                double probabilidade = calcular_probabilidade(a, b, c, d);
                if (probabilidade != 0.0) {
                    printf("Probabilidade: %.2f%%\n", probabilidade);
                }
                break;
            }
            case 2: {
                printf("Digite o limite do intervalo [a]: ");
                scanf("%lf", &a);
                printf("Digite o limite do intervalo [b]: ");
                scanf("%lf", &b);
                double media = calcular_media(a, b);
                if (media != 0.0) {
                    printf("Média: %.2f\n", media);
                }
                break;
            }
            case 3: {
                printf("Digite o limite do intervalo [a]: ");
                scanf("%lf", &a);
                printf("Digite o limite do intervalo [b]: ");
                scanf("%lf", &b);
                double desvio_padrao = calcular_desvio_padrao(a, b);
                if (desvio_padrao != 0.0) {
                    printf("Desvio Padrão: %.2f\n", desvio_padrao);
                }
                break;
            }
            case 4: {
                printf("Digite o limite do intervalo [a]: ");
                scanf("%lf", &a);
                printf("Digite o limite do intervalo [b]: ");
                scanf("%lf", &b);
                double variancia = calcular_variancia(a, b);
                if (variancia != 0.0) {
                    printf("Variância: %.2f\n", variancia);
                }
                break;
            }
            case 5: {
                printf("Digite o limite do intervalo [a]: ");
                scanf("%lf", &a);
                printf("Digite o limite do intervalo [b]: ");
                scanf("%lf", &b);
                double desvio_padrao = calcular_desvio_padrao(a, b);
                if (desvio_padrao != 0.0) {
                    double media = calcular_media(a, b);
                    if (media != 0.0) {
                        double coeficiente_variacao = calcular_coeficiente_variacao(desvio_padrao, media);
                        printf("Coeficiente de Variação: %.2f%%\n", coeficiente_variacao);
                    }
                }
                break;
            }
            default:
                printf("Opção inválida!\n");
                break;
        }

        printf("Deseja fazer outra operação? (S/N): ");
        scanf(" %c", &continuar);
    } while (continuar == 'S' || continuar == 's');

    return 0;
}

