#include "TaskManager.h"
#include <iostream>
#include <algorithm>

// Add task to end of vector
void TaskManager::addTask(const TaskClass& task) {
    tasks.push_back(task);
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
}


// Edit task method
void TaskManager::editTask(int index, string msg){
    tasks.at(index).task = msg;
}
