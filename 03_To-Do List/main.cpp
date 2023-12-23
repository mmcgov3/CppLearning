#include <iostream>
#include <limits>
#include "TaskClass.h"
#include "TaskManager.h"

int main() {
    TaskManager manager;
    string task;
    int priority, choice, index;

    while (true) {
        cout << "1. Add Task\n2. Delete Task\n3. View Tasks\n4. Edit Task\n5. Exit\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter task description: ";
                cin.ignore();
                getline(cin, task);
                cout << "Enter task priority: ";
                cin >> priority;
                manager.addTask(TaskClass(priority, task));
                break;
            case 2:
                cout << "Enter task index to delete: ";
                cin >> index;
                manager.deleteTask(index);
                break;
            case 3:
                manager.viewTasks();
                break;
            case 4:
                cout << "Which task would you like to edit?: ";
                cin >> index;
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear the input buffer
                cout << "What would you like to change the message to?: ";
                getline(cin, task); // Use getline to read the full line, including spaces
                manager.editTask(index, task);
                break;
            case 5:
                return 0;
            default:
                cout << "Invalid choice. Please try again.\n";
                break;
        }
    }

    return 0;
}
