#include <iostream>
using namespace std;
int main()
{
    int array[10], repeat[10];
    for(int i = 0; i < 10; i++)
       {
        cout << "Please enter value no " << i+1 << "\n=> ";
        cin >> array[i];
        repeat[i] = 0;
        cout << endl;
        }
    for(int i = 0; i < 10; i++)
        {
        int count = 1;
        for(int j = i+1; j < 10; j++)
        {
            if(array[i] == array[j])
            {
                count++;
                repeat[j] = -1;
            }
        }
        if(repeat[i] == 0)
        {
            repeat[i] = count;
        }
        }
    for(int i = 0; i < 10; i++)
    {
        if(repeat[i] != -1)
        {
            cout<< array[i] <<" occurs = " << repeat[i] << " times."<<endl;
        }
    }
        cout << "\nThank you SYEDA NISHAT TASNIM Ma'am!!!!";
}
