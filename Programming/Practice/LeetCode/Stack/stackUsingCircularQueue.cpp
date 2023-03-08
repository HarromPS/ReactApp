#include <iostream>
#include <cstdio>
#include <stdbool.h>

using namespace std;

typedef class MyStack
{
public:
    int front, rear;
    int size;
    int *arr;
    MyStack()
    {
        MyStack *q = (MyStack *)malloc(sizeof(MyStack));
        q->front = q->rear = -1;
        q->size = 100;
        q->arr = (int *)malloc(sizeof(int) * q->size);
    }

    void push(int x)
    {
        if(front==-1)
        {
            front=0;
            rear=0;
            *arr=x;
        }
        if((rear+1)%size==front)
        {

        }
        
    }

    int pop()
    {
    }

    int top()
    {
    }

    bool empty()
    {
    }
} MyStack;

int main()
{
    /*
    Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
    */
    return 0;
}