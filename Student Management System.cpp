#include <iostream>
#include <string>

using namespace std;

struct Student {
  int id;
  string name;
  float grades[3]; // Assuming 3 grades for simplicity
};

int main() {
  Student students[100]; // Array to store up to 100 students
  int numStudents = 0; // Keeps track of the number of students added

  int choice;

  do {
    cout << "\n--- Student Management System ---\n";
    cout << "1. Add Student\n";
    cout << "2. Display Students\n";
    cout << "3. Exit\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
      case 1:
        if (numStudents == 100) {
          cout << "Error: Maximum number of students reached!\n";
        } else {
          cout << "Enter student ID: ";
          cin >> students[numStudents].id;
          cout << "Enter student name: ";
          cin.ignore(); // Clear input buffer
          getline(cin, students[numStudents].name);
          for (int i = 0; i < 3; i++) {
            cout << "Enter grade " << i + 1 << ": ";
            cin >> students[numStudents].grades[i];
          }
          numStudents++;
          cout << "Student added successfully!\n";
        }
        break;
      case 2:
        if (numStudents == 0) {
          cout << "No students added yet.\n";
        } else {
          cout << "\nStudent List:\n";
          for (int i = 0; i < numStudents; i++) {
            cout << "ID: " << students[i].id << endl;
            cout << "Name: " << students[i].name << endl;
            cout << "Grades: ";
            for (int j = 0; j < 3; j++) {
              cout << students[i].grades[j] << " ";
            }
            cout << endl;
          }
        }
        break;
      case 3:
        cout << "Exiting program.\n";
        break;
      default:
        cout << "Invalid choice.\n";
    }
  } while (choice != 3);

  return 0;
}
