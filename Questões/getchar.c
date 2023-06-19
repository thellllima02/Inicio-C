#include <stdio.h>

int main()
{
    char ch;
    printf("Digite alguma caaractere: ");
    ch = getchar();
    putchar(ch);
    printf("\n A tecla que voce pressionou é %c.",ch);
    
}