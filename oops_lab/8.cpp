#include <iostream>
using namespace std;

// Generic template function to search for any data type
template <typename T>
int Search(T arr[], int size, T key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i;  // Return index if key is found
        }
    }
    return -1;  // Return -1 if key is not found
}

int main() {
    // Test arrays of different types
    int intArr[] = {10, 20, 30, 40, 50};
    double doubleArr[] = {1.1, 2.2, 3.3, 4.4, 5.5};

    // Search in integer array
    int intIndex = Search(intArr, 5, 30);
    if (intIndex != -1) {
        cout << "Integer key value found at index " << intIndex << endl;
    } else {
        cout << "Integer key value not found" << endl;
    }

    // Search in double array
    int doubleIndex = Search(doubleArr, 5, 3.3);
    if (doubleIndex != -1) {
        cout << "Double key value found at index " << doubleIndex << endl;
    } else {
        cout << "Double key value not found" << endl;
    }

    return 0;
}