#include <iostream>
#include <string>

using namespace std;

int main() {
    string name;
    while (true) {
        cout << "Please enter your name (or 'END' to quit): ";
        cin >> name;
        if (name == "END") {
            break;
        }
        cout <<  name  << endl;
    }

    cout << "I am done" << endl;
    return 0;
}