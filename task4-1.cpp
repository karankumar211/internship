#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    // program to run 
    cout<<"for loop "<<endl;
    for (int i=0;i<n;i++){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"while loop"<<endl;
    int j=0;
    while(j!=n){
        cout<<j<<" ";
        j++;
    }
 return 0;
}