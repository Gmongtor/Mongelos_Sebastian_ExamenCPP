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
void addTask(const Task& task) {
        tasks.push_back(task);
    }
    void removeTask(int index) {
        tasks.erase(tasks.begin() + index);
    }
    void printTasks() {
        for (int i = 0; i < tasks.size(); i++) {
            cout << i << ". " << tasks[i].description << endl;
        }
    }
};
int main() {
    TaskList taskList;
    taskList.addTask(Task("Comprar leche"));
    taskList.addTask(Task("Comprar pan"));
    taskList.addTask(Task("Comprar huevos"));
    taskList.printTasks();
    taskList.removeTask(1);
    taskList.printTasks();
    return 0;
}
