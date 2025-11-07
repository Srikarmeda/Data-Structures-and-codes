#include<stdio.h>
#define MAX 100
int deque[MAX];
int front=-1;
int rear=-1;
void insertFront(int item)
{
    if(front==0)
    {
        printf("Can't insert at front.\n");
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
            front=front-1;
        }
        deque[front]=item;
    }
}
void insertRear(int item)
{
    if(rear==MAX-1)
    {
        printf("Can't insert at front.\n");
    }
    else{
        if(rear==-1)
        {
            front=0;
            rear=0;
        }
        else{
            rear=rear+1;
        }
        deque[rear]=item;
    }
}
void deleteFront()
{
    int item;
    if(front==-1)
    {
        printf("can't delete from front.\n");
    }
    else
    {
        item=deque[front];
        if(front==rear)
        {
            front=-1;
            rear=-1;
        }
        else
        {
            front=front+1;
        }
        printf("Deleted element at front is %d\n",item);
    }
}
void deleteRear()
{
    int item;
    if(rear==-1)
    {
        printf("can't delete at rear.\n");
    }
    else{
        item=deque[rear];
        if(front==rear)
        {
            front=-1;
            rear=-1;
        }
        else{
            rear=rear-1;
        }
        printf("Deleted element at rear is %d\n",item);
    }
}
int main() {
    insertFront(10);
    insertFront(20);
    insertRear(30);
    insertRear(40);
    deleteFront();
    insertFront(50);
    deleteRear();
    for (int i=front;i<rear+1;i++)
    {
        printf("%d ---",deque[i]);
    }
    return 0;
}
