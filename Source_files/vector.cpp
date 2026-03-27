// program to return sum of elements in an array - performed by vector
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n,sum=0;
    vector<int> arr(n);
    cout << "Enter the elements in the array: ";
    for(int i=0 ; i < n;i++){
        cin >> arr[i];
        sum += arr[i];
    }
    cout << sum << endl;
    return 0;
}