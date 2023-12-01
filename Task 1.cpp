#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// Task structure to store task information
struct Task {
    std::string description;
};

// Function to display the menu
void displayMenu() {
    std::cout << "\n==== ToDo List Manager ====\n";
    std::cout << "1. Add Task\n";
    std::cout << "2. View Tasks\n";
    std::cout << "3. Delete Task\n";
    std::cout << "4. Quit\n";
    std::cout << "==========================\n";
}

// Function to add a task
void addTask(std::vector<Task>& tasks) {
    Task newTask;
    std::cout << "Enter task description: ";
    std::getline(std::cin >> std::ws, newTask.description);
    tasks.push_back(newTask);
    std::cout << "Task added successfully!\n";
}

// Function to view all tasks
void viewTasks(const std::vector<Task>& tasks) {
    if (tasks.empty()) {
        std::cout << "No tasks available.\n";
    } else {
        std::cout << "\n==== Task List ====\n";
        for (size_t i = 0; i < tasks.size(); ++i) {
            std::cout << i + 1 << ". " << tasks[i].description << '\n';
        }
        std::cout << "====================\n";
    }
}

// Function to delete a task
void deleteTask(std::vector<Task>& tasks) {
    viewTasks(tasks);
    
    if (tasks.empty()) {
        return;
    }

    int choice;
    std::cout << "Enter the task number to delete: ";
    std::cin >> choice;

    if (choice >= 1 && choice <= static_cast<int>(tasks.size())) {
        tasks.erase(tasks.begin() + choice - 1);
        std::cout << "Task deleted successfully!\n";
    } else {
        std::cout << "Invalid task number.\n";
    }
}

int main() {
    std::vector<Task> tasks;

    int option;
    do {
        displayMenu();
        std::cout << "Enter your choice (1-4): ";
        std::cin >> option;

        switch (option) {
            case 1:
                addTask(tasks);
                break;
            case 2:
                viewTasks(tasks);
                break;
            case 3:
                deleteTask(tasks);
                break;
            case 4:
                std::cout << "Exiting program. Goodbye!\n";
                break;
            default:
                std::cout << "Invalid choice. Please try again.\n";
        }
    } while (option != 4);

    return 0;
}

