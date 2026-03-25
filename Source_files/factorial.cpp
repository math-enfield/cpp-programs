//write a code to take an integer input from the user and print it's factorial
#include <iostream>
using namespace std;

int Factorial(int z){
    int result;
    for (int i=1 ; i <= z ; i++){
        result = result * i;
    }
    return result;
}
int main(){
    int num;
    cout << "Enter the number you want the factorial of: ";
    cin >> num;
    cout << "The factorial of "<<num<<" is: "<<Factorial(num)<<endl;
    return 0;
}