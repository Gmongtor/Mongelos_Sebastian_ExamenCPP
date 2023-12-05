#include <iostream>
#include <string>
#include <map>
using namespace std;
class Environment {
private:
    map<std::string, int> symbolTable;
public:
    void addSymbol(const string& key, int value) {
        symbolTable[key] = value;
    }
    int getSymbol(const string& key) {
        auto it = symbolTable.find(key);
        if (it != symbolTable.end()) {
            return it->second;
        }
        throw runtime_error("Simbolo no encontrado");
    }
    void removeSymbol(const string& key) {
        symbolTable.erase(key);
    }

};