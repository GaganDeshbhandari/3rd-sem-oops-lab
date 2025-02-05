#include <iostream>
using namespace std;

// Base class Student
class Student {
public:
    int Regno;
    char Name[20];
    int Semester;
    char Branch[20];

    // Function to get student data
    void GetData() {
        cout << "Enter Regno: ";
        cin >> Regno;
        cout << "Enter Name: ";
        cin >> Name;
        cout << "Enter Semester: ";
        cin >> Semester;
        cout << "Enter Branch: ";
        cin >> Branch;
    }
};

// Derived class Exams
class Exams : public virtual Student {
public:
    int Marks1;
    int Marks2;
    int Marks3;

    // Function to get exam marks
    void GetMarks() {
        cout << "Enter Marks1: ";
        cin >> Marks1;
        cout << "Enter Marks2: ";
        cin >> Marks2;
        cout << "Enter Marks3: ";
        cin >> Marks3;
    }
};

// Derived class Sports
class Sports : public virtual Student {
public:
    char Sports_grade;

    // Function to get sports grade
    void GetSports() {
        cout << "Enter Sports Grade: ";
        cin >> Sports_grade;
    }
};

// Derived class Awards
class Awards : public Exams, public Sports {
public:
    // Function to display student details
    void Display() {
        cout << "Name: " << Student::Name << endl;
        cout << "Regno: " << Student::Regno << endl;
        cout << "Branch: " << Student::Branch << endl;
        cout << "Exams Semester: " << Exams::Semester << endl;
        cout << "Marks1: " << Marks1 << endl;
        cout << "Marks2: " << Marks2 << endl;
        cout << "Marks3: " << Marks3 << endl;
        cout << "Sports Semester: " << Sports::Semester << endl;
        cout << "Sports Grade: " << Sports_grade << endl;
    }
};

// Main function
int main() {
    Awards a1;
    a1.GetData();
    a1.GetMarks();
    a1.GetSports();
    a1.Display();
    return 0;
}