// this is a number guessing game. Guess any number between 1 to 100 and the program will tell you if it's higher or lower or hit the bull's eye.
#include <iostream>
#include <ctime>
using namespace std;

int main(){
    srand(time(0));
    int num,RandomNum,z;
    RandomNum = rand() % 100;
    cout << "Welcome to the Guessing Game!" << endl;
    do {
        cout<<"Guess a number between 1 and 100: ";
        cin>>num;
        if (num == RandomNum){
            cout << "Bull's Eye! That was the correct guess"<<endl;
            z=0;
        }
        else if(num > RandomNum){
            cout<< "Alas! Too high"<<endl;
        }
        else if ( num < RandomNum){
            cout << "Alas! Too Low"<<endl;
        }
        else if (num > 100){
            cout << "Please input a guess between 1 and 100"<< endl;
        }
    }
    while (z != 0);
    return 0;
}
