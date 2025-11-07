#include<stdio.h>
#define MAX 100
int queue[MAX];
int front=-1;
int rear=-1;
void enqueue(int item)
{
    if(rear==MAX-1)
    {
        printf("Queue is full\n");
    }
    else
    {
        if(front==-1)
        {
            front=0;
            rear=0;
        }
        else
        {
            rear=rear+1;
        }
        queue[rear]=item;
    }
}
void dequeue()
{
    int item;
    if(front==-1)
    {
        printf("Queue is empty.\n");
    }
    else
    {
        if(front==rear)
        {
            front=-1;
            rear=1;
        }
        else
        {
            item=queue[front];
            front=front+1;
        }
        printf("Deleted element is %d\n",item);
    }
}
int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    dequeue();
    dequeue();
    enqueue(50);
    enqueue(60);
    dequeue();
    for (int i=front;i<rear+1;i++)
    {
        printf("%d ---",queue[i]);
    }
    return 0;
}
