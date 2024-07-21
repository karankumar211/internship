/*  Write if-else statements to compare variables
 Use comparison and logical operators
 Create a simple program that makes decisions based on user input*/
#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    if(a>0 && a<50){
        cout<<"The number is  between 0 and  50.";

    }
    else if( a<50 && a>100){
        cout<<"the number is between 50 and 100";
    }
    else if(a==50){
        cout<<"the number is equal to 50";
    }
    else{
        cout<<"the number is less than 0";
    }
}