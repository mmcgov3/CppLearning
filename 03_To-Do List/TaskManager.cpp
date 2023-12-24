#include "TaskManager.h"
#include <iostream>
#include <algorithm>
using namespace std;

// Add task to end of vector (O(log(n)))
void TaskManager::addTask(const TaskClass& task) {
    // find first element greater than task.priority
    auto it = upper_bound(tasks.begin(), tasks.end(), task);
    // insert task before the iterator
    tasks.insert(it, task);
}

// Delete task at a given index
void TaskManager::deleteTask(int index) {
    if (index >= 0 && index < tasks.size()) {
        tasks.erase(tasks.begin() + index);
    }
}

// Print out the tasks along with their priority
void TaskManager::viewTasks() const {
    for (size_t i = 0; i < tasks.size(); ++i) {
        cout << i << ": [Priority: " << tasks[i].priority << "] " << tasks[i].task << endl;
    }
    cout << "\n";
}


// Edit task description method. Change task message at given index
void TaskManager::editTaskDescription(int index, string msg){
    tasks.at(index).task = msg;
}

// Edit task priority method
void TaskManager::editTaskPriority(int index, int priority){
    // store the message of the task
    string message_store = tasks.at(index).task;
    // erase task from the list
    this->deleteTask(index);
    // add the task back with new prioriy
    TaskClass newTask = TaskClass(priority, message_store);
    this->addTask(newTask);
}
