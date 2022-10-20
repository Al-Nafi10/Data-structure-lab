#include <iostream>
using namespace std;
int search(int a[],int j,int x)
{
    int i;
    for (i=0;i<j;i++)
        {
        if (a[i]==x)
            {
                return i;
            }
        }
    return -1;
}
int main(void)
{
    int j,e,i;
    cout <<"Enter the size of an Array            : ";
    cin >>j;
    int a[j];
    cout<< "Enter the elements of an Array        : ";
    for (i=0;i<j;i++)
    {
        cin>>a[i];
    }
    cout <<"Enter element that you want to search : ";
    cin >> e;
    int r = search(a,j,e);
    if(r == -1)
    {
       cout<<"Element is missing!!!!!!!!!!!!!!!!!!!";
    }
    else
    {
       cout<<"Element is in index                 : "<<r;
    }
    cout<<endl;
    return 0;
}
