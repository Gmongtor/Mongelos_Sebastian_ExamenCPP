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
    int getSymbol(const string& key) {
        auto it = symbolTable.find(key);
        if (it != symbolTable.end()) {
            return it->second;
        }
        throw runtime_error("Simbolo no encontrado");
    }
};
int main(){
    Environment env;
    env.insert("x", 10);
    env.insert("y", 20);
    env.insert("z", 30);
    cout << env.getSymbol("x") << endl;
    cout << env.getSymbol("y") << endl;
    cout << env.getSymbol("z") << endl;
    return 0;
}