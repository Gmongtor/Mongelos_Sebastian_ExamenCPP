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
class Variant {
public:
    void applyVariant(Environment& env, const std::string& property, const std::string& value) {
        env.properties[property] = value;
    }
};
int main() {
    Environment forest("Forest");
    forest.properties["sky"] = "blue";
    forest.properties["level"] = "normal";
    forest.properties["whether"] = "sunny";
    forest.displayEnvironment();
    Variant nightMode;
    nightMode.applyVariant(forest, "sky", "black");
    nightMode.applyVariant(forest, "whether", "cloudy");
    nightMode.applyVariant(forest, "level", "hard");
    forest.displayEnvironment();
    return 0;
}

