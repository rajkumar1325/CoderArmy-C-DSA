#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;

    int n = input.length();

    cout << "All possible substrings:\n";
    for (int start = 0; start < n; ++start) {
        for (int end = start; end < n; ++end) {
            string substring = input.substr(start, end - start + 1);
            cout << substring << endl;
        }
    }

    return 0;
}
