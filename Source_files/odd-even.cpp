//write a program to take a number as input and check wheather it's odd or even
#include <iostream>
using namespace std;

int main(){
    int num;
    cout<< "Enter the number you want to check: ";
    cin>>num;
    if (num%2==0){
        cout<<"The number is even"<<endl;
    }
    else{
        cout<<"The number is odd"<<endl;
    }
    return 0;
}