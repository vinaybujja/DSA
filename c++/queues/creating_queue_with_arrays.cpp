#include<iostream>
using namespace std;
#define n 10

class queue
{
private:
    int *ar;
    int frnt, rear;
public:
    queue()
    {
        ar = new int[n];
        frnt = -1;
        rear = -1;
    }

    void enqueue(int val)
    {
        if(rear == n-1)
        {
            cout<<"no memory to add element in queue."<<endl;
            return;
        }
        if(frnt == -1)
        {
            frnt++;
            rear++;
            ar[rear] = val;
        }
        else
        {
            ar[rear] = val;
            rear++;
        }
        
    }

    void dequeue()
    {
        if(frnt == -1 || frnt>rear)
        {
            cout<<"no element in queue."<<endl;
        }
        else
        {
            frnt++;
        }
    }
    int front()
    {
        if(frnt <= rear && frnt != -1)
        return ar[frnt];
        return -1; //return -1 when empty
    }
    int queue_size()
    {
        return (frnt <= rear && frnt != -1) ? rear - frnt +1 : 0;
    }
    bool empty()
    {
        if(frnt > rear || frnt == -1)
        return true;
        return false;
    }
};

int main()
{
    queue q;
    q.enqueue(5);
    q.enqueue(4);
    q.enqueue(3);
    q.enqueue(2);
    cout<<q.empty()<<"\n"<<q.front()<<"\n"<<q.queue_size()<<endl;
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    cout<<q.empty()<<"\n"<<q.front()<<"\n"<<q.queue_size()<<endl;
    return 0;
}
