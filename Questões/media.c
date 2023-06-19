#include <stdio.h>

int main (void){
    float a,b,c,resul,ME;

    printf("Primeira nota 01: ");
    scanf("%f", &a);
    printf("Segunda nota 02: ");
    scanf("%f", &b);
    printf("Terceira nota 03: ");
    scanf("%f",&c);
    printf("Media do exercicios ");
    scanf("%f",&ME);

    resul = (a+b*2+c*3+ME)/7;

    if(resul>=9)
    {
        printf(" A ",resul);
    }
    else if ((resul<9)&&(resul>=7.5))
    {
        printf(" B ",resul);
    }
    else if ((resul<7.5)&&(resul>=6))
    {
        printf(" C ",resul);
    }
    else if ((resul<6)&&(resul>=4))
    {
        printf(" D ",resul);
    }
    else if ((resul<4)&&(resul>=0))
    {
        printf(" E ",resul);
    }
}