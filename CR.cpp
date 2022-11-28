#include <iostream>
using namespace std;

class Queue {
public:
    int items[5], front, rear;
    Queue()
    {
        front = -1;
        rear = -1;
    }

    bool isFull()
    {
        if((rear+1)%5==front)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    bool isEmpty()
    {
        if(front == -1 && rear==-1 ||front>rear)
        return true;
        else
        return false;
    }

    void enQueue(int ele)
    {
        if(isFull())
        {
            cout << "Queue is full";
        } else {
            if(front == -1) front = 0;
            rear = (rear + 1) % 5;
            items[rear] = ele;
            cout << endl << "Inserted " << ele << endl;
        }
    }

    int deQueue()
    {
        int ele;
        if(isEmpty())
        {
            cout << "Queue is empty" << endl;
            return(-1);
        } else {
            ele = items[front];
            if(front == rear)
            {
                front = -1;
                rear = -1;
            }
            else {
                front=(front+1) % 5;
            }
            return(ele);
        }
    }
    void display()
    {
        int i;
        if(isEmpty())
        {
            cout << endl << "Empty Queue" << endl;
        }
        else
        {
            cout << "Front -> " << front;
            cout << endl << "Items -> ";
            for(i=front; i!=rear;i=(i+1)%5)
                cout << items[i];
            cout << items[i];
            cout << endl << "Rear -> " << rear;
        }
    }
};
int main()
{
    Queue q;
    q.enQueue(55);
    q.enQueue(65);
    q.enQueue(45);
    q.enQueue(49);
    q.enQueue(45);
    q.enQueue(96);
    q.deQueue();
    q.deQueue();
}
