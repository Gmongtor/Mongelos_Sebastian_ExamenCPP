#include <iostream>
#include <variant>
#include <string>
using namespace std;
using Value = variant<int, double, string>;
Value getValue(const string& s) {
 if (s == "int") {
    return 10;
    } else if (s == "double") {
        return 3.14;
    } else if (s == "string") {
        return "Hola mundo";
    }
    throw runtime_error("Tipo de dato no soportado");
 }
int main() {
    try {
        Value v = getValue("int");
        cout << get<int>(v) << endl;
        v = getValue("double");
        cout << get<double>(v) << endl;
        v = getValue("string");
        cout << get<string>(v) << endl;
        v = getValue("char");
        cout << get<string>(v) << endl;
    } catch (const runtime_error &e) {
        cout << e.what() << endl;
    }
    return 0;
}
