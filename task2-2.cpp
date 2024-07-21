/* Program to calculate the area of a circle using the formula : (3.14)r2*/
#include<iostream>
using namespace std;
int main (){
    const float pi=3.14;
    double  area=0;
    int r;
    cout<<"Enter your radius of circle"<<endl;
    cin>>r;
    area = (3.14)*r*r;
    cout<<"Area of circle is "<<area;
    return 0;
}