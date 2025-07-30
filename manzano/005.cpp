#include <iostream>
#include <fmt/core.h>

/*
Efetuar o cálculo e apresentar o valor de uma prestação de
um bem em atraso, utilizando a fórmula PRESTAÇÃO ←
VALOR + (VALOR * (TAXA / 100) * TEMPO).
*/

int main(){

    int prestacao, valor, taxa, tempo;

    std::cout << "Informe o valor inicial da prestação:\n";
    std::cin >> valor;
    std::cout << "Informe o tempo de atraso:\n";
    std::cin >> tempo;
    std::cout << "Informe o valor da taxa:\n";
    std::cin >> taxa;

    prestacao = valor + (valor * (taxa / 100) * tempo);

    fmt::print("O valor da prestação após uma taxa de {}%, é {}.\n", taxa, prestacao);

    return 0;
}