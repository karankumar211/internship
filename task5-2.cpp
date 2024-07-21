/* Program to check whether a number is prime, Armstrong or perfect number using functions*/
#include<iostream>
#include<cmath>
using namespace std;
void prime(int num){
    //to check prime 
    if (num < 2)
        cout << num << " is not a prime number.\n";
    else {
        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                cout << num << " is not a prime number.\n";
                return;
            }
            
            }
        
                 cout << num << " is a prime number.\n";
              
        }
       
    

}
void armstrong(int num){
    // to check the number Armstrong 
    int sum = 0, temp = num;
    while (temp!= 0) {
        int digit = temp % 10;
        sum += digit * digit * digit;
        temp /= 10;
    }
    if (num == sum)
        cout << num << " is an Armstrong number.\n";
    else
        cout << num << " is not an Armstrong number.\n";
}
void perfect_square(int num){
    // to check perfect square
    int sqrt_num = sqrt(num);
    if (sqrt_num * sqrt_num == num)
        cout << num << " is a perfect square.\n";
    else
        cout << num << " is not a perfect square.\n";
}

int main(){
    int n;
    cout<<"enter the number ";
    cin>>n;
    prime(n);
    armstrong(n);
    perfect_square(n);
}