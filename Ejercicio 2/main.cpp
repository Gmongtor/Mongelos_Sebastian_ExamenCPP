#include <iostream>
#include <string>
#include <map>
using namespace std;
class Environment {
private:
    map<std::string, int> symbolTable;
public:
    bool insert (const pair<string,int>& val) {
        return symbolTable.insert(val).second;
    }
    int getSymbol(const string& key) {
        auto it = symbolTable.find(key);
        if (it != symbolTable.end()) {
            return it->second;
        }
        throw runtime_error("Simbolo no encontrado");
    }
};