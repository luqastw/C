#include <iostream>
#include <fmt/core.h>
#include <cmath>
#include <iomanip>

/*
Calcular e apresentar o valor do volume de uma lata de
óleo, utilizando a fórmula VOLUME ← 3.14159 * R ↑ 2 *
ALTURA.
*/

int main (){

    double volume, r, altura;

    std::cout << "Desafio Volume da Lata de Óleo.\n";
    std::cout << "-------------------------------\n";
    std::cout << "Informe o valor em centímetros do raio:\n";
    std::cin >> r;
    std::cout << "Informe o valor em centímetros da altura:\n";
    std::cin >> altura;

    volume = 3.14 * pow(r, 2) * altura;

    if (std::cin.good()){
        fmt::print("O volume da sua lata de óleo é de {}ml.", volume);
    } else {
        std::cout << "Valor definidos inválidos.";
    }

    return 0;
}