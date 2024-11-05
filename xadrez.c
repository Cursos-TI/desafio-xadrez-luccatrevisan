#include <stdio.h>
int main() {
    int rainha = 0;
    int torre = 0;
    int bispo = 0; // peças inicializadas com valor 0 por estarem em suas casas iniciais

     while (bispo < 5) // como quero movimentar o bispo em apenas 5 casas, basta 5 incrementos (1 em cada loop)
    {
        printf("Bispo: Direita, Cima\n", torre); //movimentação do bispo na diagonal direita superior
        ++bispo;
    }

    while (torre < 5)
    {
        printf("Torre: Direita\n", torre);
        ++torre;
    }

    while (rainha < 8)
    {
        printf("Rainha: Esquerda\n", rainha);
        ++rainha;
    }
}