//this is a simple program to take inputs from the user and perform arithmetic operations on it.
// this is the code for a calculator. It also asks the user if they want to perform another operation.
#include <iostream>
using namespace std;

int main(){
    char x;
    while(x == 'y'){
        float a,b,result;
        char operation;
        cout<<"Enter Number A and B for the calculation";
        cin>>a>>b;
        cout<<"Enter the operation you want to perform(+,-,/,*)";
        cin>>operation;
        if (operation=='+'){
            result = a+b;
        }
        else if (operation=='-'){
            result = a-b;
        }
        else if (operation=='/'){
            if(b==0){
                cout<<"Divison by zero error!"<<endl;
            }
            result = a/b;
        }
        else if (operation=='*'){
            result = a*b;
        }
        else{
            cout<<"Enter a valid operation!"<<endl;
        }
        cout<<"The result is "<<result<<endl;
        cout<<"Do you want to perform another calculation? (y/n)";
        cin>>x;
    }
    return 0;
}
