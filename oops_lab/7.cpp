#include <iostream>
using namespace std;

// Employee class to manage employee details and salary calculations
class Employee {
private:
    int emp_number;        // Employee ID
    char emp_name[20];     // Employee name
    float emp_basic;       // Basic salary
    float emp_da;         // Dearness Allowance
    float emp_hra;        // House Rent Allowance
    float emp_net_sal;    // Net salary after adding allowances

public:
    // Method to read employee details from user
    void read() {
        cout << "\nEnter employee number: ";
        cin >> emp_number;
        cout << "Enter employee name: ";
        cin >> emp_name;
        cout << "Enter employee basic salary: ";
        cin >> emp_basic;
        cout << "Enter employee DA: ";
        cin >> emp_da;
        cout << "Enter employee HRA: ";
        cin >> emp_hra;
    }

    // Calculate net salary by adding basic salary and allowances
    float calculate_net_salary() {
        emp_net_sal = emp_basic + emp_da + emp_hra;
        return emp_net_sal;
    }

    // Display all employee details
    void display() {
        cout << "\n\n**** Details of Employee ****";
        cout << "\nEmployee Name: " << emp_name;
        cout << "\nEmployee Number: " << emp_number;
        cout << "\nBasic Salary: " << emp_basic;
        cout << "\nEmployee DA: " << emp_da;
        cout << "\nEmployee HRA: " << emp_hra;
        cout << "\nNet Salary: " << emp_net_sal;
        cout << "\n-------------------------------\n";
    }
};

int main() {
    int num_employees, i;
    
    // Get the number of employees
    cout << "How many employees do you want to enter? ";
    cin >> num_employees;

    // Dynamic allocation of employee array
    Employee* emp = new Employee[num_employees];

    // Input details for each employee
    for (i = 0; i < num_employees; i++) {
        cout << "\nEnter details for Employee " << (i + 1);
        emp[i].read();
        emp[i].calculate_net_salary();
    }

    // Display details of all employees
    cout << "\nDisplaying all employee details:";
    for (i = 0; i < num_employees; i++) {
        emp[i].display();
    }

    // Free allocated memory
    delete[] emp;
    return 0;
}