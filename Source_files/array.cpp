// this is a program to take input of array elements and return the sum of those elements
#include <iostream>
using namespace std;

int main(){
    int size,sum=0;
    cout<< "Enter the size of the array: ";
    cin >> size;
    int arr[size];
    cout << "Enter your elements: ";
    for (int i=0;i<size;i++){
        cin >> arr[i];
        sum=sum+arr[i];
    }
    cout<<"Sum of the array is " <<sum;
    return 0;
}