#include <vector>
#include "TaskClass.h"

class TaskManager {
private:
    vector<TaskClass> tasks;

public:
    void addTask(const TaskClass& task);
    void deleteTask(int index);
    void viewTasks() const;
    void editTask(int index, string msg);
};
