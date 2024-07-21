#include<iostream>
using namespace std;
void check(int a, int b, int c){
    if (a+b+c == 180){
        cout<<"Valid";
    }
    else{
        cout<<"Not Valid";
    }
}
int main(){
    int a,b,c;
    cout<<"enter angle one ";
    cin>>a;
    cout<<"enter angle two ";
     cin>>b;
    cout<<"enter angle three  ";
     cin>>c;
    check(a,b,c);
}