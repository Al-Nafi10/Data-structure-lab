#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void countingSort(int arr[], int n) {
    int maxVal = *max_element(arr, arr + n);
    vector<int> count(maxVal + 1, 0);
    for (int i = 0; i < n; i++)
        count[arr[i]]++;
    int j = 0;
    for (int i = 0; i <= maxVal; i++) {
        for (int k = 0; k < count[i]; k++) {
            arr[j] = i;
            j++;
        }
    }
}
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    countingSort(arr, n);
    cout << "Sorted array: \n";
    printArray(arr, n);
    return 0;
}
