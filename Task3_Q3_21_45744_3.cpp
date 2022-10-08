#include<iostream>
using namespace std;
struct Employee
{
    int jyear,sal;
    string id;
};
int main()
{  int i;
   struct Employee e[10];
   for(i=0;i<9;i++)
   {   cout<< "------------------------------\n";
       cout<< "Enter employee Id           : ";
       cin>>e[i].id;
       cout<< "Enter employee Joining year : ";
       cin>>e[i].jyear;
       cout<< "Enter employee Salary       : ";
       cin>>e[i].sal;
       cout<< "\n------------------------------";
       cout<< endl<<endl;
   }
   cout<< "\n-----------------------------------------------------------";
   cout<< "\nEmployee who join before 2009 and Salary more than 20,000 :";
   for(i=0;i<10;i++)
   {
     if(e[i].jyear < 2009 && e[i].sal > 20000)
     {
         cout<< "\nEmployee Id           : "<<e[i].id<<endl;
         cout<< "Employee Joining year : "<<e[i].jyear<<endl;
         cout<< "Employee Salary       : "<<e[i].sal<<endl;
         cout<<endl;
         cout<< "\n-----------------------------------------------------------";
     }
   }
}
