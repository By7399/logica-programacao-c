#include <stdio.h>

int main() {
    int opcao;

    do {
        printf("1 - Continuar\n");
        printf("2 - Sair\n");
        scanf("%d", &opcao);
    } while (opcao != 2);

    return 0;
}
