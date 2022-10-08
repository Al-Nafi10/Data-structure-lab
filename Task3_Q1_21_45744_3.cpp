#include<iostream>
using namespace std;
int main()
{
    int row;
    int column;
    int a;
    int b;
    int array[5][5];
    int transpose [5][5];
    cout<<"Enter the Row Size for Array   : ";
    cin>>row;
    cout<<"\nEnter the Column Size for Array: ";
    cin>>column;
    cout<<"\nPlease put "<<row*column<<" array values here : ";
    for(a=0; a<row; a++)
    {
        for(b=0; b<column; b++)
            cin>>array[a][b];
    }
    cout<<"\nYour giver array is:\n";
    for(a=0; a<row; a++)
    {
        for(b=0; b<column; b++)
        cout<<" "<<array[a][b];
        cout<<endl;
    }
    for (int a = 0; a < row; ++a)
      for (int b = 0; b < column; ++b)
        {
         transpose[b][a] = array[a][b];
        }
   cout << "\nThe reverse array is:" << endl;
   for (int a = 0; a < column; ++a)
      for (int b = 0; b < row; ++b)
        {
         cout << " " << transpose[a][b];
         if (b == row - 1)
            cout << endl << endl;
        }
    return 0;
}
