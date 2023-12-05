#include <iostream>
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
int main() {
    int n;
    std::cout << "Ingrese un numero: ";
    std::cin >> n;
    try {
        ProcesoDeRiesgo(n);
    } catch (const std::runtime_error& e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
