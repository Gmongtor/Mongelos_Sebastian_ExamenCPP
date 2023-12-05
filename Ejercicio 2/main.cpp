#include <iostream>
#include <string>
#include <map>
using namespace std;
class Environment {
private:
    map<std::string, int> symbolTable;
public:
    bool insert(const std::string& key, int value) {
        auto it = symbolTable.find(key);
        if (it != symbolTable.end()) {
            return false;
        }
        symbolTable[key] = value;
        return true;
    }
};
int main(){
    Environment env;
    env.insert("x", 10);
    env.insert("y", 20);
    env.insert("z", 30);
    for (const auto& key : {"x", "y", "z", "unknown"}) {
        auto value = env.getSymbol(key);
        if (value) {
            std::cout << key << " = " << *value << std::endl;
        } else {
            std::cout << "El símbolo '" << key << "' no existe." << std::endl;
        }
    }
}