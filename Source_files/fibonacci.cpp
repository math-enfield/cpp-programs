//this is the code for printing a certain number of fibonacci sequence as input by the user
#include <iostream>
using namespace std;

int main(){
    int a=0,b=1;
    int c, num;
    cout << "Enter the number of Fibonacci sequence you want to print: ";
    cin >> num;
    cout<<"01";
    for (int i=0;i<num-2;i++){
        c=b+a;
        cout << c;
        a=b;
        b=c;
    }
    return 0;
}