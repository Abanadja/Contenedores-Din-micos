//
// Created by alexa on 16/12/2024.
//

#include "Ejercicio2.h"
#include <iostream>
#include <list>
#include <stack>

void Ejercicio2() {
    std::list<float> lista = {1.1, 2.2, 3.3, 4.4, 5.5};
    std::stack<float, std::list<float>> pila(lista);

    while(!pila.empty()) {
        std::cout << pila.top() << std::endl;
        pila.pop();
    }
}