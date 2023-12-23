#include <iostream>
#include <string>
using namespace std;
#ifndef TASKCLASS_H
#define TASKCLASS_H

class TaskClass{
    public:
        int priority;
        string task;

        TaskClass(int p, string s);
        bool operator>(const TaskClass& other) const;
};

#endif