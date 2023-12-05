#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Task {
public:
    string description;
    Task(string description) : description(description) {}
};
class TaskList {
private:
    vector<Task> tasks;
public:

};
