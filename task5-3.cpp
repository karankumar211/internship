#include<iostream>
using namespace std;

// Function to print even numbers in a range
void printEven(int start, int end) {
    if(start > end)
        return;
    if(start % 2 == 0)
        cout << start << " ";
    printEven(start + 1, end);
}

// Function to print odd numbers in a range
void printOdd(int start, int end) {
    if(start > end)
        return;
    if(start % 2!= 0)
        cout << start << " ";
    printOdd(start + 1, end);
}

int main() {
    int start, end;
    cout << "Enter the start of the range: ";
    cin >> start;
    cout << "Enter the end of the range: ";
    cin >> end;
    
    cout << "Even numbers in the range: ";
    printEven(start, end);
    cout << endl;
    
    cout << "Odd numbers in the range: ";
    printOdd(start, end);
    cout << endl;
    
    return 0;
}