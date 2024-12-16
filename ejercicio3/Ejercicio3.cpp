//
// Created by alexa on 16/12/2024.
//

#include "Ejercicio3.h"
#include <iostream>
#include <vector>
#include <algorithm>

void Ejercicio3() {
    std::vector<int> numeros = {50, 20, 60, 10, 30, 40};
    std::sort(numeros.begin(), numeros.end());

    for(int num : numeros) {
        std::cout << num << std::endl;
    }

    int maxNum = *std::max_element(numeros.begin(), numeros.end());
    std::cout << "Numero maximo: " << maxNum << std::endl;
}