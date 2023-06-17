#include <stdio.h>

int main() {
    int numero, numeroInvertido = 0;
    
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);
    
    while (numero != 0) {
        numeroInvertido = numeroInvertido * 10 + numero % 10;
        numero /= 10;
    }
    
    printf("O número invertido é: %d\n", numeroInvertido);
    
    return 0;
}
