#include <iostream>
#include <algorithm>
#include <fstream>
using namespace std;

int main() {
    string str, st;
    ifstream in("sample.txt");
    ofstream out("sample2.txt");

    // Read the entire file content
    while (getline(in, st)) {
        str += st + "\n";
    }
    in.close();

    // Reverse the string content
    reverse(str.begin(), str.end());

    // Write the reversed content to the output file
    out << str << endl;
    out.close();

    return 0;
}