#include <stdio.h>

int main() {
    int senha = 1234;
    int tentativa;

    printf("Digite a senha: ");
    scanf("%d", &tentativa);

    while (tentativa != senha) {
        printf("Senha incorreta\n");
        scanf("%d", &tentativa);
    }

    printf("Acesso liberado\n");
    return 0;
}
