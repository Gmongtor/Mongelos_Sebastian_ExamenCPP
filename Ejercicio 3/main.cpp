#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
class SymbolTable {
public:

    void add(const std::string& symbol, int value) {
        symbols[symbol] = value;
    }

    int lookup(const std::string& symbol) {
        auto it = symbols.find(symbol);
        if (it != symbols.end()) {
            return it->second;
        } else {
            throw std::runtime_error("Simbolo no encontrado");
        }
    }

private:
    std::unordered_map<std::string, int> symbols;
};
int main(){
    SymbolTable tablaSimbolos;
    tablaSimbolos.add("x", 10);
    tablaSimbolos.add("y", 20);

    try {
        cout << tablaSimbolos.lookup("x") << endl;
        cout << tablaSimbolos.lookup("y") << endl;
        cout << tablaSimbolos.lookup("z") << endl;
    } catch (const runtime_error& e) {
        cout << e.what() << endl;
    }
}