/*Este programa recebe como entrada a operação matematica de +,-,*, / e % e dois valores
binario de 8 bits, devolve como saída o resultado em binario 8 bits*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int Converter_binario_decimal(char binario[])
{
    int decimal=0;
    printf("\n Primeiro Numero Decimal: %d \n", decimal);
    //varre cada posicao do vetor para leitura
    for(int j=0; j<8; j++)
    {
        //Faz as soma das potencias de 2 a cada 1 encontrado
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

//faz a operação e retorna o resultado em decimal

int Operacao(char operador[], int primeiro_numero_decimal, int segundo_numero_decimal)
{
    int resultado=0;
        if(operador[0] == 43)
        {
            resultado=primeiro_numero_decimal + segundo_numero_decimal;
        }else if(operador[0] ==45)
        {
            resultado=primeiro_numero_decimal - segundo_numero_decimal;
        }else if(operador[0] ==42)
        {
            resultado=primeiro_numero_decimal * segundo_numero_decimal;
        }else if(operador[0] ==47)
        {
            resultado=primeiro_numero_decimal / segundo_numero_decimal;
        }else if(operador[0] ==37)
        {
            resultado=primeiro_numero_decimal % segundo_numero_decimal;
        }else
        {
        }
    printf("\n O Resultado Decimal é: %i \n", resultado);
    return resultado;
}


//faz converssao de decimal para binario
char Converter_decimal_binario(int binario)
{
    return "0";
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
    
    //obtem o resultado em decimal
    int resultado_decimal=1;
    resultado_decimal = Operacao(operador, primeiro_numero_decimal, segundo_numero_decimal);
    printf("\n O Resultado Decimal é: %i \n", resultado_decimal);
    
    char resultado_binario[8];
    resultado_binario[0] = Converter_decimal_binario(resultado_decimal);
    printf("\n O Resultado Binario é: %s \n", resultado_binario[0]);

    return 0;
}
