#include <iostream>
#include <fmt/core.h>

/*
Efetuar o cálculo da quantidade de litros de combustível
gasta em uma viagem, utilizando um automóvel que faz 12
quilômetros por litro. Para obter o cálculo, o usuário deve
fornecer o tempo gasto (variável TEMPO) e a velocidade
média (variável VELOCIDADE) durante a viagem. Dessa
forma, será possível obter a distância percorrida com a
fórmula DISTÂNCIA ← TEMPO * VELOCIDADE. A partir do
valor da distância, basta calcular a quantidade de litros de
combustível utilizada na viagem com a fórmula
LITROS_USADOS ← DISTÂNCIA / 12. O programa deve
apresentar os valores da velocidade média, tempo gasto na
viagem, a distância percorrida e a quantidade de litros
utilizada na viagem.
*/

int main(){

    int tempo, velocidade, distancia, litros_usados;

    std::cout << "Desafio de Litros Usados.\n";
    std::cout << "-------------------------\n";
    std::cout << "Informe o tempo gasto na viagem:\n";
    std::cin >> tempo;
    std::cout << "Informe a velocidade média do carro:\n";
    std::cin >> velocidade;

    distancia = tempo * velocidade;
    litros_usados = distancia / 12;

    std::cout << "OUTPUT:\n";
    fmt::print("Velocidade Média: {}km/h\n", velocidade);
    fmt::print("Tempo gasto: {} minutos\n", tempo);
    fmt::print("Distância percorrida: {}km\n", distancia);
    fmt::print("Litros usados: {}l\n", litros_usados);

    return 0;
}