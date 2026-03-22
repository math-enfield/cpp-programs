//this is the simple code for printing a multiplication table of a number input by the user
#include <iostream>
using namespace std;

void Table(int z){
    int multiple;
    for (int i=0; i<=10;i++) {
        multiple = i*z;
        cout << z << 'x' << i << '=' << multiple << endl;
    }
}

int main(){
    int num;
    cout << "Enter the number you want the multiplication table of: ";
    cin >> num;
    Table(num);
    return 0;
}