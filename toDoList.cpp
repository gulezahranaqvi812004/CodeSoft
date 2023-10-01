#include <iostream>
#include <vector>
#include <string>
#include <windows.h>
#include <conio.h>
#include <iostream>
#include <string.h>
#include <conio.h>
#include <math.h>
using namespace std;
void ColorFunction(int colorCode);
void header();
// Function to display the menu options
void displayMenu() {
    cout << "===== To-Do List Menu =====" << endl;
    cout << "1. Add Task" << endl;
    cout << "2. View Tasks" << endl;
    cout << "3. Remove Task" << endl;
    cout << "4. Quit" << endl;
    cout << "===========================" << endl;
}


int main() {
    
    vector<string> tasks; // A vector to store tasks

    int choice;
    string task;
    ColorFunction(3);
    do {
       
        header();
        displayMenu();
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                
                cout << "Enter a new task: ";
                cin.ignore(); // Clear the newline character from the buffer
                getline(cin, task); // Read the whole line as a task
                tasks.push_back(task); // Add the task to the list
                cout << "Task added!" << endl;
                break;

            case 2:
                if (tasks.empty()) {
                    cout << "The to-do list is empty." << endl;
                } else {
                    cout << "To-Do List:" << endl;
                    for (size_t i = 0; i < tasks.size(); i++) {
                        cout << i + 1 << ". " << tasks[i] << endl;
                    }
                }
                break;

            case 3:
                if (tasks.empty()) {
                    cout << "The to-do list is empty." << endl;
                } else {
                    cout << "Enter the task number to remove: ";
                    int taskNumber;
                    cin >> taskNumber;

                    if (taskNumber >= 1 && taskNumber <= static_cast<int>(tasks.size())) {
                        tasks.erase(tasks.begin() + taskNumber - 1); // Remove the task
                        cout << "Task removed!" << endl;
                    } else {
                        cout << "Invalid task number. Please try again." << endl;
                    }
                }
                break;

            case 4:
                cout << "Goodbye!" << endl;
                break;

            default:
                cout << "Invalid choice. Please try again." << endl;
        }
        cout << "Press any key to continue:"<< endl;
        getch();
         system("cls");

    } while (choice != 4);

    return 0;
}
void ColorFunction(int colorCode)
{
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(consoleHandle, colorCode);
}

void header()
{
    cout << " _____  ____  ____  _  __ ____    _____ ____  ____    _____  ____  ____  ____ ___  _" << endl;
    cout << "/__ __\\/  _ \\/ ___\\/ |/ // ___\\  /    //  _ \\/  __\\  /__ __\\/  _ \\/  _ \\/  _ \\  \\//" << endl;
    cout << "  / \\  | / \\||    \\|   / |    \\  |  __\\| / \\||  \\/|    / \\  | / \\|| | \\|| / \\| \\  / " << endl;
    cout << "  | |  | |-||\\___ ||   \\ \\___ |  | |   | \\_/||    /    | |  | \\_/|| |_/|| |-|| / /  " << endl;
    cout << "  \\_/   \\_/ \\|\\____/\\_|\\_\\____/  \\_/   \\____/\\_/\\_\\    \\_/  \\____/\\____/\\_/ \\|/_/   "<<endl;
                                                                                    
cout << endl;
}