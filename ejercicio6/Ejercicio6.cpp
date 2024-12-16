//
// Created by alexa on 16/12/2024.
//

#include "Ejercicio6.h"
#include <iostream>
#include <boost/lexical_cast.hpp>

void Ejercicio6() {
    std::string s = "12345";

    try {
        int i = boost::lexical_cast<int>(s);
        std::cout << "Numero: " << i << std::endl;
    } catch(boost::bad_lexical_cast &e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
}