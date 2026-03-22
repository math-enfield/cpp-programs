//this is the code for printing a certain number of fibonacci sequence as input by the user
#include <iostream>
using namespace std;

int main(){
    int a=0,b=1,c,num;
    cout << "Enter the number of Fibonacci terms you want to print: ";
    cin >> num;
    for (int i=0;i<num;i++){
        if (i==0) cout << a;
        else if (i==1) cout << " "<< b;
        else{
            c=b+a;
            a=b;
            b=c;
            cout << " " << b;
        }
    }
    return 0;
}