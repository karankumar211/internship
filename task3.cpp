// program to check weather it is alphabet, digit or special character 
#include<iostream>
using namespace std; 
void check(char input){
    if(input>=65 && input<=90|| input>=97 && input<=122){
        cout<<"Alphabet";
    }
    else if(input>=48&& input<=57){
        cout<<"Digit";
    }
    else{
        cout<<"Special Character";
    }
}
int main(){
    char a;
    cin>>a;
    check(a);
}