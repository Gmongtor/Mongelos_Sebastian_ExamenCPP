#include <iostream>
#include <string>
#include <stdexcept>
void ProcesoDeRiesgo(int n) {
    if (n < 0) {
        throw std::runtime_error("El numero no puede ser negativo");
    } else if (n == 0) {
        throw std::runtime_error("El numero no puede ser cero");
    } else if (n > 100) {
        throw std::runtime_error("El numero no puede ser mayor a 100");
    }
    std::cout << "Procesamiento completado con el valor: " << std::endl;
}