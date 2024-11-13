#include <iostream>
#include "Car.h"

int main()
{
    setlocale(LC_ALL, "Russian");

    
    Lorry lorry1{};
    Lorry lorry2{};
    Lorry lorry3{};

    std::cout << "Input------------------\n\n";
    std::cin >> lorry1;

    std::cout << "\n\nOutput---------------------------\n\n";
    std::cout << lorry1;

    std::cout << "\n\nNumber object: " << count(lorry1);
    return 0;
}