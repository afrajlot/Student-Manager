#include "bits/stdc++.h"
using namespace std;

struct Student {
    int id;
    string name;
    double gpa;
};

vector<Student> students;

void addStudent() {
    Student s;
    cout << "\nEnter Student ID: ";
    cin >> s.id;
    cout << "Enter Student Name: ";
    cin.ignore();
    getline(cin, s.name);
    cout << "Enter GPA: ";
    cin >> s.gpa;

    students.push_back(s);
    cout << "\n[Success] Student added successfully!\n\n";
}

int main() {
    int choice;
    while (true) {
        cout << "=============================" << endl;
        cout << "   STUDENT MANAGEMENT SYSTEM  " << endl;
        cout << "=============================" << endl;
        cout << "1. Add Student" << endl;
        cout << "2. View All Students" << endl;
        cout << "3. Exit" << endl;
        cout << "=============================" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            addStudent();
        } else if (choice == 3) {
            cout << "Exiting program. Goodbye!" << endl;
            break;
        } else {
            cout << "Feature not available or invalid choice!\n" << endl;
        }
    }

    return 0;
}