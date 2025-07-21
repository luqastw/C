#include <iostream>
#include <fmt/core.h>

/*
Ler uma temperatura em graus Celsius e apresentá-la
convertida em graus Fahrenheit. A fórmula de conversão é F
← C * 9 / 5 + 32, sendo F a temperatura em Fahrenheit e C
a temperatura em Celsius.
*/

int main(){
    int celcius, fahrenheit;
    
    std::cout << "Desafio da Conversão Celcius => Fahrenheit.\n";
    std:printf("----------------------------------\n");
    std::cout << "Informe o valor em Celcius:\n";
    std::cin >> celcius;

    if (std::cin.good()){
        fahrenheit = celcius * 9 / 5 + 32;
        fmt::print("O valor de {}°C em Fahrenheit equivale a {}°F.", celcius, fahrenheit);
        return 0;
    } else {
        std::cout << "Valor inválido.\n";
        return 0;
    }
}