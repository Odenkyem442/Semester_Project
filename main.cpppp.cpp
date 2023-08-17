#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

class Student {
public:
    string name;
    int id;
    vector<string> courses;
    vector<int> grades;
};

// Function to add a new student record
void addStudent(vector<Student>& students) {
    Student newStudent;
    cout << "Enter student name: ";
    cin >> newStudent.name;
    cout << "Enter student ID: ";
    cin >> newStudent.id;

    // Code to add courses and grades to the student's vectors

    students.push_back(newStudent);
    cout << "Student record added successfully." << endl;
}

// Function to display all student records
void displayStudents(const vector<Student>& students) {
    for (int i = 0; i < students.size(); i++) {
        cout << "Name: " << students[i].name << endl;
        cout << "ID: " << students[i].id << endl;
        // Display courses and grades
    }
}

int main() {
    vector<Student> students;
    int choice;

    while (true) {
        cout << "Menu:" << endl;
        cout << "1. Add Student" << endl;
        cout << "2. Display Students" << endl;
        cout << "3. Exit" << endl;
        
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            addStudent(students);
        } else if (choice == 2) {
            displayStudents(students);
        } else if (choice == 3) {
            break;
        } else {
            cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}


