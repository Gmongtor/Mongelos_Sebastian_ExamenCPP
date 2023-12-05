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
    bool insert (const pair<string,int>& val) {
        return symbolTable.insert(val).second;
    }
};
int main() {
    Environment env;
    env.addSymbol("x", 10);
    env.addSymbol("y", 20);
    env.addSymbol("z", 30);
    cout << env.getSymbol("x") << endl;
    cout << env.getSymbol("y") << endl;
    cout << env.getSymbol("z") << endl;
    env.removeSymbol("y");
    cout << env.getSymbol("x") << endl;
    cout << env.getSymbol("z") << endl;
    return 0;
}