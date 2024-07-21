// program to keep asking number  until the number  is negative and at end sum of all number s  
#include<iostream>
using namespace std;
int main(){
int sum=0;
int n;
do {
        cout << "Enter a number or enter negative number to exit : ";
        cin >> n;
        if(n >= 0) {
            sum += n;
        }
    } while(n > 0);
cout<<"The sum of numbers is : "<<sum;
}