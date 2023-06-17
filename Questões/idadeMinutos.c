#include <stdio.h>

int main() {
    int idadeAnos, idadeMinutos;
    
    printf("Digite a idade em anos: ");
    scanf("%d", &idadeAnos);
    
    idadeMinutos = idadeAnos * 365 * 24 * 60;
    
    printf("A idade em minutos é: %d\n", idadeMinutos);
    
    return 0;
}
