#include <stdio.h>
#include <locale.h>

int main(int argc, char *argv[]) {
    setlocale(LC_ALL, "Portuguese");
    float valoretiqueta, valorapagar;
    int opcao;

    printf("Digite o valor do produto: ");
    scanf("%f", &valoretiqueta);

    printf("\nEscolha a forma de pagamento:\n");
    printf("\n1 A vista em dinheiro (10%% de desconto)\n");
    printf("\n2 A vista no cartao de credito (5%% de desconto)\n");
    printf("\n3 Em duas vezes (preco normal)\n");
    printf("\n4 Em tres vezes (10%% de juros)\n");
    printf("opcao: ");
    scanf("%d", &opcao);  

    if (opcao == 1) {
        valorapagar = valoretiqueta - (valoretiqueta * 0.10);
    } else if (opcao == 2) {
        valorapagar = valoretiqueta - (valoretiqueta * 0.05);
    } else if (opcao == 3) {
        valorapagar = valoretiqueta;
    } else if (opcao == 4) {
        valorapagar = valoretiqueta + (valoretiqueta * 0.10);  
    } else {
        printf("\nOpcao invalida!\n");
        return 1;
    }

    printf("\nValor a pagar: R$ %.2f\n", valorapagar);

    return 0;
}