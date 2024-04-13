#include "Queue.h"

//Initialize front and rear position equal 0
void InitQueue(SqQueue * Q)
{
    Q->front = 0;
    Q->rear = 0;
}
//If front == rear the Queue is empty
int IsEmpty(SqQueue * Q)
{
    return Q->front == Q->rear;
}

int IsFull(SqQueue * Q)
{
    return (Q->rear + 1) % MAX == Q->front;
}
//If the Queue is not full, can enqueue.
void EnQueue(SqQueue * Q, QElemType e)
{
    if (IsFull(Q))
    {
        printf("The queue is full.\n");
        //exit(-1);
        return;
    }
    else
    {
        Q->data[Q->rear] = e;
        Q->rear = (Q->rear + 1) % MAX;      //It is to avoid overflow.
    }
}
//If the Queue is not empty, can dequeue.
void DeQueue(SqQueue * Q)
{
    if (IsEmpty(Q))
    {
        printf("The queue is empty.\n");
        //exit(-1);
        return;
    }
    else
    {
        //readable
        Q->data[Q->front] = NO;
        Q->front = (Q->front + 1) % MAX;
    }
}

void MakeEmpty(SqQueue * Q)
{
    while (!IsEmpty(Q))
        DeQueue(Q);
}

int LengthQueue(SqQueue Q)
{
    return (MAX - Q.front + Q.rear) % MAX;
}
