#include <stdio.h>;

int main()
{
   int fahre,cels;
   printf("Digite temperatura em graus Fahrenheit: ");
   scanf("%d",&fahre);
   cels=(fahre-32)*5/9;
   printf("temperatura em graus Celsius é %d",cels);
    
}