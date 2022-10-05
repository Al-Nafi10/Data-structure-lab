#include <iostream>
using namespace std;
int main()
{
    int array[10], value, count = 0;
    for(int i = 0; i < 10; i++)
        {
        cout << "Please enter value no " << i+1 << "\n=> ";
        cin >> array[i];
        cout << endl;
        }
    cout << "Please enter an int you wanna find \n=> ";
    cin >> value;
    cout << endl;
    for(int i = 0; i < 10; i++)
        {
        if(array[i] == value)
           {
            count++;
           }
        }
    cout << "The int you entered is "<<value<<" and this int appeared in the array " << count << " times\n";
    cout << "Thank you SYEDA NISHAT TASNIM Ma'am!!!!";

}
