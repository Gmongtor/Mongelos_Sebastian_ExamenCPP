#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
class SymbolTable {
private:
    unordered_map<std::string, int> symbolTable;
public:
    int lookup(const string& key) {
        auto it = symbolTable.find(key);
        if (it != symbolTable.end()) {
            return it->second;
        }
        throw runtime_error("Simbolo no encontrado");
    }
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