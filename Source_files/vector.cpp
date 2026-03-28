// program to return sum of elements in an array - performed by vector
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n,sum=0;

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> arr;

    cout << "Enter the elements in the array: ";
    for(int i=0 ; i < n;i++){
        int x;
        cin >> x;
        arr.push_back(x);
        sum += x;
    }
    cout << "The sum of the elements is "<<sum << endl;
    return 0;
}