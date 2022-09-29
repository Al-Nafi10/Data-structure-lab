#include<iostream>
using namespace std;
int main()
{
  int array1[5],array2[5],a1,a2,x,a,y;
  cout<<"Enter your first array size               : "<<" ";
  cin>>a1;
  cout<<"Enter the elements of the first array     : "<<" ";
  for(x=0;x<a1;x++)
  {
      cin>>array1[x];
  }
  cout<<"Enter your second array size              : "<<" ";
  cin>>a2;
  cout<<"Enter the elements of the second array    : "<<" ";
  for(x=0;x<a2;x++)
  {
      cin>>array2[x];
  }
  cout<<"Your uncommon elements of the two arrays  : "<<" ";
  bool temp=false;
   for( x=0;x<5;x++)
    {
        for( y=0;y<5;y++)
        {
            if(array1[x]==array2[y])
            {
                temp=true;
                break;
            }
            else if(array1[x]!=array2[y])
            {
                temp=false;
                continue;
            }
        }
        if(temp==false)
        {
            cout<<array1[x]<<" ";
        }
   }
        for( x=0;x<5;x++)
        {
        for( y=0;y<5;y++)
        {
            if(array1[x]==array2[y])
            {
                temp=true;
                break;
            }
            else if(array2[x]!=array1[y])
            {
                temp=false;
                continue;
            }
        }
        if(temp==false)
        {
            cout<<array2[x]<<" ";
        }
    }
  return 0;
}
