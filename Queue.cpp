#include <iostream>
using namespace std;

class Queue
{
private:
    int queue[5], front, rear,size=5;

public:
    Queue()
    {
        front = -1;
        rear = -1;
    }

    bool isFull()
    {
        if(front == 0 && rear == size - 1)
            {
                return true;
            }
                return false;
    }

    bool isEmpty()
    {
        if(front == -1) return true;
        else return false;
    }

    void enQueue(int value)
    {
        if(isFull())
            {
                cout << endl<< " \n(Full)\n";
            }
        else
            {
                if(front == -1) front = 0;
                rear++;
                queue[rear] = value;
                cout << value << " ";
            }
    }
    int deQueue()
    {
       int value;
       if(isEmpty())
        {
            cout << "(Empty)\n" << endl; return(-1); } else
            {
                value = queue[front]; if(front >= rear)
            {
                front = -1;
                rear = -1;
            }
            else
            {
               front++;
            }
            cout << endl << "Deleted queue element from : " << value ;
            return(value);
            }
    }

void displayQueue()
    {
        int i;
        if(isEmpty())
        {
            cout << endl << "There is no value in this queue." << endl;
        }
        else
        {
            cout << endl << "Front = " <<queue [front];
            cout << endl << "Queue elements : ";
            for(i=front; i<=rear; i++)
            cout << queue[i]<<" ";
            cout << endl << "Rear = " << queue [rear] << endl;
        }
    }
};
int main()
{
    Queue Q;

    Q.deQueue();
    cout<<"Inserted queue Elements are : "<<endl;
    Q.enQueue(21);
    Q.enQueue(22);
    Q.enQueue(23);
    Q.enQueue(24);
    Q.enQueue(25);
    Q.enQueue(30);
    Q.displayQueue();
    Q.deQueue();
    Q.displayQueue();

return 0;
}
