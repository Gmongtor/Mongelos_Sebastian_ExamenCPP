#include <iostream>
#include <string>
#include <map>
using namespace std;
class Environment {
public:
    string name;
    map<std::string, string> properties;
    Environment(string name) : name(name) {}
    void displayEnvironment() {
        cout << "Environment: " << name << endl;
        for (auto& pair : properties) {
            cout << pair.first << " = " << pair.second << endl;
        }
    }
};
