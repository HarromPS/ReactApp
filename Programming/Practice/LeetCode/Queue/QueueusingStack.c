#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

struct S
{
    int front,rear;
    int size;
    int* arr;
};
typedef struct {
    struct S *s;
} MyQueue;


MyQueue* myQueueCreate() {
    MyQueue * Q=(MyQueue*)calloc(sizeof(MyQueue),1);
    Q->s=(struct S*)calloc(sizeof(struct S),1);
    Q->s->size=100;
    Q->s->front=Q->s->rear=-1;
    Q->s->arr=(int*)calloc(sizeof(int),Q->s->size);
    return Q;
}

void myQueuePush(MyQueue* Q, int x) {
    // check if stack is full or not
    if((Q->s->rear+1)%Q->s->size==(Q->s->front))
    {
        return ;
    }
    else 
    {
        Q->s->rear=(Q->s->rear+1)%Q->s->size;
        Q->s->arr[Q->s->rear]=x;
    }
}

int myQueuePop(MyQueue* Q) {
    // check if the stack is empty
    if(Q->s->front==Q->s->rear)
    {
        return 0;
    }
    else {
        Q->s->front=(Q->s->front+1)%Q->s->size;
        return Q->s->arr[Q->s->front];
    }
}   

int myQueuePeek(MyQueue* Q) {
  return Q->s->arr[Q->s->front+1];
}

bool myQueueEmpty(MyQueue* Q) {
  return Q->s->front==Q->s->rear?true:false;
}

void myQueueFree(MyQueue* Q) {
    free(Q->s);
    free(Q);
}

/**
 * Your MyQueue struct will be instantiated and called as such:
 * MyQueue* obj = myQueueCreate();
 * myQueuePush(obj, x);
 
 * int param_2 = myQueuePop(obj);
 
 * int param_3 = myQueuePeek(obj);
 
 * bool param_4 = myQueueEmpty(obj);
 
 * myQueueFree(obj);
*/
int main(){
    return 0; 
}