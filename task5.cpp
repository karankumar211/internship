#include<iostream>
using namespace std;
// define a function with parameters
    int add(int a, int b){
        //returning the value 
        return a + b;
    }
int main(){
    //call the function with arguments
    cout << "The sum of 5 and 7 is: " << add(5,7) << endl;
    return 0;

}