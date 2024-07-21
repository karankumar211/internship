/* Program to first find the average of 5 subjects and then the percentage*/
#include<iostream>
using namespace std;
int main(){
    int total_marks=500;
    float average=0;
    float total=0;
    float percentage=0;
    
    float subject[5];
    cout<<"enter the marks of subject out of 100 "<<endl;
    for(int i=1;i<=5;i++){
        cout<<"subject :"<<i<<" ";
        cin>>subject[i];
        if(subject[i]>100){
            cout<<"Invalid input. Marks should not be more than 100."<<endl;
           return 0;
        }
        
    }
    for(int i=1;i<=5;i++){
        
        total+=subject[i];
    }
     percentage = (total/total_marks);
    percentage= percentage *100;


    average=total/5;
    cout<<"average marks :"<<average<<endl;

    cout<<"Total Percentage is :"<<percentage<<"%"<<endl;
  
   
    return 0;
}