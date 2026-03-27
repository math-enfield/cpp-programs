// this is a program to calculate the grade from the marks input by the user.
#include <iostream>
using namespace std;

void Grade(int z){
    if (z >= 90 && z<=100) cout << "A grade";
    else if (z >= 80 && z <90) cout << "B grade"<<endl;
    else if (z >= 70 && z <80) cout << "C grade"<<endl;
    else if (z >= 60 && z <70) cout << "D grade"<<endl;
    else if (z >= 50 && z <60) cout << "E grade"<<endl;
    else if (z < 50 && z >= 0) cout << "You've failed.";
    else cout << "Enter valid marks" << endl;
}
int main(){
    int num;
    cout << "Please enter you marks: ";
    cin >> num;
    Grade(num);
    return 0;
}