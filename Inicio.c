/*Este programa recebe como entrada a operação matematica de +,-,*, / e % e dois valores binario de 8 bits, devolve como saída o resultado em binario 8 bits*/

#include <stdio.h>
#include <stdlib.h>



int main()
{
    char operador;
    printf("digite o operador \n\n");
    scanf("%s ",operador);
    printf("%s", operador);
    int primeiraleitura=0,numero1;

    for (int i=0;i<8;)
    {
         scanf("%i",numero1);
        primeiraleitura=primeiraleitura + (2^i);
        printf("O i é: \n\n"); /* code */
      i++;
    }
    
    
printf("\n\n Ola Mundooo \n\n");

    return 0;
}