cmake_minimum_required(VERSION 3.29)
project(Contenedores_Din_micos)

set(CMAKE_CXX_STANDARD 14)

set(Boost_INCLUDE_DIR "C:/Boost/boost_1_87_0")
find_package(Boost REQUIRED)
include_directories(${Boost_INCLUDE_DIRS})

add_executable(Contenedores_Din_micos
        main.cpp
        ejercicio1/Ejercicio1.cpp
        ejercicio1/Ejercicio1.h
        ejercicio2/Ejercicio2.cpp
        ejercicio2/Ejercicio2.h
        ejercicio3/Ejercicio3.h
        ejercicio3/Ejercicio3.cpp
        ejercicio4/Ejercicio4.h
        ejercicio4/Ejercicio4.cpp
        ejercicio5/Ejercicio5.cpp
        ejercicio5/Ejercicio5.h
        ejercicio6/Ejercicio6.cpp
)
target_link_libraries(Contenedores_Din_micos ${Boost_LIBRARIES})
