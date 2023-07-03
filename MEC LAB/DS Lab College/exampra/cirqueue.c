#include <stdio.h>
int queue[100];
int front=-1,rear=-1;
void enqueue(int item)
{
    if(front=-1 && rear==-1)
    {
        front=rear=0;
        queue[rear]=item;
    }
    else
    {
        if((rear+1)%100!=front)
        {
            rear=(rear+1)%100;
            q[rear]=item;
        }
        else
        {
            /* code */
            printf("queue full");
        }
        
    }
}
void dequeue()
{
    if(front==-1 && rear == -1)
    {
        printf("Underflow\n");
    }
    else if(front==rear)
    {
        printf("%d\n",queue[front]);
        front=-1;
        rear=-1;
    }
    else
    {
        front=(front+1)%99;
    }

}
int main()
{
    system("clear");
    enqueue(1);
    enqueue(3);
    enqueue(3);
    enqueue(3);
    enqueue(3);
    enqueue(3);
    enqueue(3);
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
}