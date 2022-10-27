#include <iostream>
using namespace std;
int stack[5],top=-1;

bool isEmpty()
{
    if (top==-1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool isFull()
{
    if(top==4)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool push (int value)
{
    if(isFull())
    {
       cout<<"The stack is full"<<endl;
       return false;
    }
    else
    {
        top++;
        stack[top]=value;
        return true;
    }
}
bool pop()
{
    if(isEmpty())
    {
        cout<<"The stack is empty"<<endl;
        return false;
    }
    else
    {
        top--;
        return true;
    }
}
int topValue()
{
    if(isEmpty())
    {
        cout<<"The stack is empty"<<endl;
        return false;
    }
    else
    {
        cout<<"The top value is : "<<stack[top]<<endl;
        return true;
    }
}
void show()
{
    if(isEmpty())
    {
        cout<<"The stack is empty"<<endl;
    }
    else
    {
        for(int i = top;i>=0;i--)
        {
            cout<<stack[i]<<endl;
        }
    }

}
int main()
{
    cout<<"____________________"<<endl;
    cout<<"New stack :\n"<<endl;
    push(5);
    push(4);
    push(3);
    push(2);
    push(1);
    show();
    cout<<"____________________"<<endl;
    topValue();
    cout<<"____________________"<<endl;
    cout<<"After pop : \n"<<endl;
    pop();
    show();
    cout<<"____________________"<<endl;

}
