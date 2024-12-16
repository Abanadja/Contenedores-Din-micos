//
// Created by alexa on 16/12/2024.
//

#include "Ejercicio1.h"
#include <iostream>
#include <vector>

void Ejercicio1() {
    std::vector<int> numeros = {10, 20, 30, 40, 50};

    for(std::vector<int>::iterator it = numeros.begin(); it != numeros.end(); ++it) {
        std::cout << *it << std::endl;
    }
}