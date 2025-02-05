#include<iostream>
using namespace std;

// Base class student
class student {
public:
    int reg, age;
    char name[20];
    void read_data();
};

// Derived class ugstudent
class ugstudent : public student {
public:
    int stipend, sem;
    float fees;
    void read_data();
};

// Derived class pgstudent
class pgstudent : public student {
public:
    int stipend, sem;
    float fees;
    void read_data();
};

// Function to read student details
void student::read_data() {
    cout << "\nEnter name: ";
    cin >> name;
    cout << "\nEnter Reg.no.: ";
    cin >> reg;
    cout << "\nEnter age: ";
    cin >> age;
}

// Function to read additional details for ugstudents
void ugstudent::read_data() {
    student::read_data();
    cout << "\nEnter the sem: ";
    cin >> sem;
    cout << "\nEnter the fees: ";
    cin >> fees;
    cout << "\nEnter the stipend: ";
    cin >> stipend;
}

// Function to read additional details for pgstudents
void pgstudent::read_data() {
    student::read_data();
    cout << "\nEnter the sem: ";
    cin >> sem;
    cout << "\nEnter the fees: ";
    cin >> fees;
    cout << "\nEnter the stipend: ";
    cin >> stipend;
}

// Main function
int main() {
    ugstudent ug[20];
    pgstudent pg[20];
    int i, n, m;
    float average;

    cout << "\nEnter the no. of entries in the ugstudent class: ";
    cin >> n;
    for (i = 0; i < n; i++) {
        ug[i].read_data();
    }

    // Calculate average age for each semester in ugstudent
    for (int sem = 1; sem <= 8; sem++) {
        float sum = 0;
        int found = 0, count = 0;
        for (i = 0; i < n; i++) {
            if (ug[i].sem == sem) {
                sum += ug[i].age;
                found = 1;
                count++;
            }
        }
        if (found == 1) {
            average = sum / count;
            cout << "\nAverage age of sem " << sem << " is " << average;
        }
    }

    cout << "\nEnter the no. of entries in the pgstudent class: ";
    cin >> m;
    for (i = 0; i < m; i++) {
        pg[i].read_data();
    }

    // Calculate average age for each semester in pgstudent
    for (int sem = 1; sem <= 8; sem++) {
        float sum = 0;
        int found = 0, count = 0;
        for (i = 0; i < m; i++) {
            if (pg[i].sem == sem) {
                sum += pg[i].age;
                found = 1;
                count++;
            }
        }
        if (found == 1) {
            average = sum / count;
            cout << "\nAverage age of sem " << sem << " is " << average;
        }
    }

    return 0;
}