#include <iostream>

using namespace std;

int main()
{
    int arr[13] = {4, 9, 5, 8, 7, 3, 1, 11, 17, 0, 19, 21, 25};
    cout << "Given array : ";
    for(int i = 0; i < 13; i++){
        cout << arr[i] << ", ";
    }
    cout << endl << "Even numbers : ";
    for(int i = 0; i < 13; i++){
        if(arr[i]%2==0){
            cout << arr[i] << ", ";
        }
    }
    cout << endl << "Odd numbers : ";
    for(int i = 0; i < 13; i++){
        if(arr[i]%2!=0){
            cout << arr[i] << ", ";
        }
    }
}
