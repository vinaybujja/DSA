#include<iostream>
using namespace std;
#define n 10

class stack
{
private:
    int *ar;
    int top;
public:
    stack()
    {
        ar = new int[n];
        top = -1;
    }

    void push(int val)
    {
        if(top == n-1)
        {
            cout<<"stack overflow"<<endl;
            return;
        }
        top++;
        *(ar + top) = val;
    }

    int pop()
    {
        if(top == -1)
        {
            cout<<"stack underflow"<<endl;
            return top;
        }
        top--;
        return ar[top+1];
    }
    int Top()
    {
        if(top == -1)
        {
            cout<<"empty stack"<<endl;
            return top;
        }
        return ar[top];
    }
    bool empty()
    {
        if(top == -1)
        return true;
        else
        return false;
    }
};

int main()
{
    stack stck;
    stck.push(5);
    stck.push(4);
    stck.push(3);
    cout<<stck.empty()<<endl;
    cout<<stck.Top()<<endl;
    stck.pop();
    cout<<stck.Top()<<endl;
    stck.pop();
    cout<<stck.Top()<<endl;
    stck.pop();
    cout<<stck.empty()<<endl;
    return 0;
}
