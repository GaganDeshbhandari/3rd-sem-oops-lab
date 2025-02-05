#include <iostream>
using namespace std;

// Template function to find successor of any numeric or character value
template <class T>
T successor(T x) {
    return x + 1;
}

// Template function to calculate sum of array elements of any numeric type
template <class X>
X sum(X arr[], int size) {
    X total = 0;
    for (int i = 0; i < size; i++) {
        total += arr[i];
    }
    return total;
}

int main() {
    // Test successor function with different data types
    cout << "Successor of 5: " << successor(5) << endl;
    cout << "Successor of 5.5: " << successor(5.5) << endl;
    cout << "Successor of 'a': " << successor('a') << endl;

    // Test sum function with different array types
    int int_arr[] = {1, 2, 3, 4, 5};
    float float_arr[] = {1.5, 2.5, 3.5, 4.5, 5.5};
    double double_arr[] = {1.0, 2.0, 3.0, 4.0, 5.0};

    int int_arr_size = sizeof(int_arr) / sizeof(int);
    int float_arr_size = sizeof(float_arr) / sizeof(float);
    int double_arr_size = sizeof(double_arr) / sizeof(double);

    cout << "Sum of int array: " << sum(int_arr, int_arr_size) << endl;
    cout << "Sum of float array: " << sum(float_arr, float_arr_size) << endl;
    cout << "Sum of double array: " << sum(double_arr, double_arr_size) << endl;

    return 0;
}