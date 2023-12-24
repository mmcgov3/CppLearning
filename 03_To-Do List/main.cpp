#include <iostream>
#include <limits>
#include "TaskClass.h"
#include "TaskManager.h"

int main() {
    TaskManager manager;
    string task;
    int priority, choice, index;

    // loop until user hits exit (Case 6)
    while (true) {
        cout << "1. Add Task\n2. Delete Task\n3. View Tasks\n4. Edit Task Description\n5. Change Task Priority\n6. Exit\nEnter your choice: ";
        cin >> choice;

        // switch statement to handle choices
        switch (choice) {
            // Add task case
            case 1:
                // Get task description
                cout << "Enter task description: ";
                cin.ignore();
                getline(cin, task);

                // Get task priority
                cout << "Enter task priority (Lower = more urgent): ";
                cin >> priority;

                // Add task to vector
                manager.addTask(TaskClass(priority, task));
                cout << "Task '" << task << "' added with priority " << priority << "\n" << endl;
                break;
            // Delete task case
            case 2:
                // Get task to delete
                cout << "Enter task index to delete: ";
                cin >> index;

                // Delete Task from vector
                manager.deleteTask(index);
                cout << "Task deleted!\n" << endl;
                break;
            // View task case
            case 3:
                manager.viewTasks();
                break;
            // Edit task description case
            case 4:
                cout << "Which task would you like to edit? (Enter item index): ";
                cin >> index;
                // Clear the input buffer
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
                cout << "What would you like to change the message to?: ";
                // Use getline to read the full line, including spaces
                getline(cin, task); 
                manager.editTaskDescription(index, task);
                cout << "Task " << index << " has now been changed to '" << task << "'.\n" << endl;
                break;
            // Edit task priority case
            case 5:
                cout << "Which task would you like to edit?: ";
                cin >> index;
                // Clear the input buffer
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
                cout << "New priority value: ";
                cin >> priority;
                manager.editTaskPriority(index, priority);
                cout << "Task priority has been changed!\n" << endl;
                break;
            // Exit case
            case 6:
                return 0;
            // error handling
            default:
                cout << "Invalid choice. Please try again.\n";
                break;
        }
    }

    return 0;
}
