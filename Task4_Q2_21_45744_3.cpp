#include<iostream>
using namespace std;
int main()
{
    int i,num,low,mid,high,a[5];
    int l=low,h=high;
    cout<<"Enter '5' Elements           : ";
    for(i=0; i<5; i++)
        {
        cin>>a[i];
        }
    cout<<endl;
    cout<<"Enter Element to be Search   : ";
    cin>>num;
    l = 0,h = 4;
    mid =(l+h)/2;
    while(l<=h)
    {
        if(a[mid]<num)
            l= mid+1;
        else if(a[mid]==num)
        {
            cout<<endl;
            cout<<"The number "<<num<<" present at index: "<<mid+1;
            cout<<endl;
            break;
        }
        else
            h = mid-1;
            mid = (l+h)/2;
    }
    if(l>h){
        cout<<endl;
        cout<<"The number "<<num<<" is missing in the Array ";
        cout<<endl;
    }
    cout<<endl;
    return 0;
}
