#include <iostream>

using namespace std;

int main()
{
    int firstVal, lastVal;

    cout << "Please enter the starting value of the range : ";
    cin >> firstVal;
    cout << "Please enter the last value of the range : ";
    cin >> lastVal;

    int size = (lastVal - firstVal) + 1;

    int arr[size];

    for(int i = 0; i < size; i++){
        arr[i] = firstVal;
        firstVal++;
    }

    cout << "All the odd numbers in the given range : ";
    for(int i = 0; i < size; i++){
       if(arr[i]%2!=0){
            cout << arr[i] << ", ";
        }
    }
}
