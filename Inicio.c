/*Este programa recebe como entrada a operação matematica de +,-,*, / e % e dois valores
binario de 8 bits, devolve como saída o resultado em binario 8 bits*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int Converter_binario_decimal(char binario[])
{
    int decimal=0;
    printf("\n Primeiro Numero Decimal: %d \n", decimal);
    for(int j=0; j<8; j++)
    {
        if(binario[j]==49)
        {
            int jj=7 - j;
            int potencia=1;
            for(;jj>0;jj--)
            {
            potencia=potencia*2;
            }
        decimal=decimal + potencia;
        }
        else
        { }
    }
    printf("\n O Numero em Decimal é: %i \n", decimal);
    return decimal;
}

int main()
{
    //Define Qual Operação Será Realizada
    char operador[1];
    printf("digite o operador \n\n");
    scanf("%s", operador);
    printf("\n operador é %s \n", operador);
    
    //Recebe Primeiro Número Binário
    char primeiro_numero_binario[8];
    printf("digite o Primeiro Numero Binário \n");
    scanf("%s", primeiro_numero_binario);
    printf("\n Primeiro Numero Binario: %s \n", primeiro_numero_binario);
    int primeiro_numero_decimal=0;
    primeiro_numero_decimal= Converter_binario_decimal(primeiro_numero_binario);
    
    printf("\n Primeiro Numero Decimal: %d \n", primeiro_numero_decimal);
    
    
    //Recebe Segundo número Binario
    char segundo_numero_binario[8];
    printf("digite o Segundo Numero Binário \n");
    scanf("%s", segundo_numero_binario);
    printf("\n O Segundo Numero Binario: %s \n", segundo_numero_binario);
    int segundo_numero_decimal=0;
    segundo_numero_decimal= Converter_binario_decimal(segundo_numero_binario);
    
    return 0;
}

