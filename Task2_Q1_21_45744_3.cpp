#include <iostream>
using namespace std;
int main()
{
    int Array1 [5],Array2 [5],mergedArray[5],i=0,j=0,k=0,Input1,Input2;
    cout<<"Enter your first array size     : " <<" ";
    cin>>Input1;
    cout<<"Enter your first array elements : "<<" ";
    for(i=0;i<Input1;i++)
    {
      cin>>Array1[i];
    }
    cout<<"Enter your second array size    : " <<" ";
    cin>>Input2;
    cout<<"Enter your second array elements: "<<" ";
    for(i=0;i<Input2;i++)
    {
        cin>>Array2[i];
    }
   i=0;
    while(i<Input1 && j<Input2)
    {
        if(Array1[i]<Array2[j])
        {
            mergedArray[k++]=Array1[i++];
        }
        else
            {
            mergedArray[k++]=Array2[j++];
            }
    }
    while(i<Input1)
    {
         mergedArray[k++]=Array1[i++];
    }
    while(j<Input2)
    {
         mergedArray[k++]=Array2[j++];
    }
    cout<<"Your merged array is            :"<<" ";
    for(k=0;k<Input1+Input2;k++)
    {
        cout<<mergedArray[k]<<" ";
    }
     cout<<endl;
     cout<<"Your reversed array is          :"<<" ";
            for(int k=12;k>=0;k--)
               {
               cout<<mergedArray[k]<<" ";
               }
           return 0;
    }
