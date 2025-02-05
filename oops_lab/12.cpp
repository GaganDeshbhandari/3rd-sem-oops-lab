#include<iostream>

using namespace std;

class matrix {
    private:
        long m[5][5];  // Matrix elements
        int row;       // Number of rows
        int col;       // Number of columns

    public:
        void getdata();  // Function to get matrix data
        int operator==(matrix);  // Overload == operator to compare matrices
        matrix operator+(matrix);  // Overload + operator to add matrices
        matrix operator-(matrix);  // Overload - operator to subtract matrices
        friend ostream &operator<<(ostream&, matrix&);  // Overload << operator to print matrix
};

// Function to check whether the order of matrices are same or not
int matrix::operator==(matrix cm) {
    if (row == cm.row && col == cm.col) {
        return 1;
    }
    return 0;
}

// Function to read data for matrix
void matrix::getdata() {
    cout << "Enter the number of rows\n";
    cin >> row;
    cout << "Enter the number of columns\n";
    cin >> col;
    cout << "Enter the elements of the matrix\n";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> m[i][j];
        }
    }
}

// Function to add two matrices
matrix matrix::operator+(matrix am) {
    matrix temp;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            temp.m[i][j] = m[i][j] + am.m[i][j];
        }
    }
    temp.row = row;
    temp.col = col;
    return temp;
}

// Function to subtract two matrices
matrix matrix::operator-(matrix sm) {
    matrix temp;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            temp.m[i][j] = m[i][j] - sm.m[i][j];
        }
    }
    temp.row = row;
    temp.col = col;
    return temp;
}

// Function to display the contents of the matrix
ostream &operator<<(ostream &fout, matrix &d) {
    for (int i = 0; i < d.row; i++) {
        for (int j = 0; j < d.col; j++) {
            fout << d.m[i][j] << " ";
        }
        fout << endl;
    }
    return fout;
}

// Main function
int main() {
    matrix m1, m2, m3, m4;
    m1.getdata();
    m2.getdata();
    if (m1 == m2) {
        m3 = m1 + m2;
        m4 = m1 - m2;
        cout << "Addition of matrices\n";
        cout << "The result is\n";
        cout << m3;
        cout << "Subtraction of matrices\n";
        cout << "The result is\n";
        cout << m4;
    } else {
        cout << "Order of the input matrices is not identical\n";
    }
    return 0;
}