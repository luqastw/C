#include <iostream>
#include <fmt/core.h>

//Página 146.

int main(){
    int celcius, fahrenheit;
    
    std::cout << "Desafio da Conversão Fahrenheit.\n";
    std:printf("----------------------------------\n");
    std::cout << "Informe um valor em Celcius:\n";
    std::cin >> celcius;

    if (std::cin.good()){
        fahrenheit = celcius * 9 / 5 + 32;
        fmt::print("O valor de {}°C em Fahrenheit é igual a {}°F.", celcius, fahrenheit);
        return 0;
    } else {
        std::cout << "Valor inválido.\n";
        return 0;
    }
}