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
    env.insert("x", 40);
    return 0;
}