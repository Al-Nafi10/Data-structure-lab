#include <iostream>

using namespace std;
int main()
{
    int array [13]={0,1,2,3,4,5,6,7,8,9,10,11,12};
    cout <<"\n";
    cout <<"Sequentially: ";
    for(int i=0; i<13;i++)
    {
        cout << array[i] << ",";
    }
    cout <<"\n";
    cout <<"\n";
    cout <<"Revers: ";
    for(int i=(13-1);i>0;i--)
    {
        cout << array[i]<<",";
    }
    cout <<"\n";
    return 0;
}
