#include <iostream>
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
    std::cout << factorialIterativo(5) << std::endl;
    std::cout << factorialRecursivo(5) << std::endl;
    std::cout << factorialConCache(5) << std::endl;
    return 0;
}