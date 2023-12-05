#include <iostream>
#include <unordered_map>
long long factorialIterativo(int n) {
    long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}
long long factorialRecursivo(int n) {
    if (n == 0) {
        return 1;
    }
    return n * factorialRecursivo(n - 1);
}
long long factorialConCache(int n) {
    static long long cache[1000] = {0};
    if (n == 0) {
        return 1;
    }
    if (cache[n] != 0) {
        return cache[n];
    }
    cache[n] = n * factorialConCache(n - 1);
    return cache[n];
}
int main() {
    std::unordered_map<int, long long> cache;
    int numero;
    std::cout << "Ingrese un número para calcular su factorial: ";
    std::cin >> numero;

    if (numero < 0) {
        std::cout << "El número no puede ser negativo." << std::endl;
        return 1;
    }
    long long resultado = factorialConCache(numero);
    std::cout << "El factorial de " << numero << " es " << resultado << std::endl;
    return 0;
}