#include <stdio.h>

int main() {
    int contador = 0; // Inicializa um contador para acompanhar o número de números encontrados
    int numero = 1001; // Inicializa o número a partir de 1001

    while (contador < 5) {
        if (numero % 11 == 5) {
            contador++;
            if (contador == 5) {
                printf("O quinto número maior que 1000 cuja divisão por 11 tem resto 5 é: %d\n", numero);
            }
        }
        numero++; // Vai para o próximo número
    }

    return 0;
}
