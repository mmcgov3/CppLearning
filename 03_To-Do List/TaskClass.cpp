#include <iostream>
using namespace std;
#include "TaskClass.h"

// constructor: Take in a priority and the task string
TaskClass::TaskClass(int p, string s){
    priority = p;
    task = s;
}

// Overload the > operator to create a greater than function between instances
bool TaskClass::operator>(const TaskClass& other) const{
    return this->priority > other.priority;
}

// Overload the < operator to create a greater than function between instances
bool TaskClass::operator<(const TaskClass& other) const{
    return this->priority < other.priority;
}

// Overload the > operator to create a greater than function between instances
bool TaskClass::operator==(const TaskClass& other) const{
    return this->priority == other.priority;
}