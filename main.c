#include <stdio.h>
#include <stdlib.h>

// Função principal onde o programa começa sua execução.
void main()
{
    // Variável que armazena a velocidade da Voyager 1 em quilômetros por hora.
    int velocidadeHora = 278280;

    // Variável que armazena a distância entre a Terra e Marte em quilômetros.
    int distanciaMarte = 570000000;

    // Calcula a distância percorrida em um dia (24 horas).
    // Multiplicando a velocidade por 24 horas.
    int distanciaDia = velocidadeHora * 24;

    // Calcula a quantidade de dias necessários para a Voyager 1 chegar a Marte.
    // Dividindo a distância total por Marte pela distância percorrida por dia.
    int dias = distanciaMarte / distanciaDia;

    // Exibe o resultado na tela.
    printf("A Voyager 1 levara %d dias para chegar em marte", dias);
}
