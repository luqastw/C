#include <iostream>
#include <fmt/core.h>

/*
Ler uma temperatura em graus Fahrenheit e apresentá-la
convertida em graus Celsius. A fórmula de conversão é C ←
((F – 32) * 5) / 9, sendo F a temperatura em Fahrenheit e C
a temperatura em Celsius.
*/

int main (){

    int fahrenheit, celcius;

    std::cout << "Desafio de Conversão Fahrenheit => Celcius.\n";
    std::cout << "-------------------------------------------\n";
    std::cout << "Informe o valor em Fahrenheit:\n";
    std::cin >> fahrenheit;

    celcius = ((fahrenheit - 32) * 5) / 9;

    if (std::cin.good()){
    fmt::print("O valor de {}°F em Celcius equivale a {}°C.", fahrenheit, celcius);
    return 0;
    } else {
        std::cout << "Valor inválido.\n";
        return 0;
    }
}
