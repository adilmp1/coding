#include <stdio.h>
int queue[100];
int front=-1,rear=-1;
void enqueue(int item)
{
    if(rear==99)
    {
        printf("overflow");
    }
    else if(front=-1 && rear==-1)
    {
        front=rear=0;
        queue[rear]=item;
    }
    else
    {
        rear++;
        queue[rear]=item;
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
        printf("%d\n",queue[front]);
        front++;
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