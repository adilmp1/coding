#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

typedef struct Person
{
    char name[20];
    int age;
} Person;

typedef struct Queue
{
    Person data[MAX_SIZE];
    int front;
    int rear;
    int size;
} Queue;

Queue *createQueue()
{
    Queue *queue = (Queue *)malloc(sizeof(Queue));
    queue->front = 0;
    queue->rear = -1;
    queue->size = 0;
    return queue;
}

int isEmpty(Queue *queue)
{
    return queue->size == 0;
}

int isFull(Queue *queue)
{
    return queue->size == MAX_SIZE;
}

void enqueue(Queue *queue, Person person)
{
    if (isFull(queue))
    {
        printf("Queue is full. Cannot add person.\n");
        return;
    }
    queue->rear = (queue->rear + 1) % MAX_SIZE;
    queue->data[queue->rear] = person;
    queue->size++;
    printf("%s joined the queue.\n", person.name);
}

void dequeue(Queue *queue)
{
    if (isEmpty(queue))
    {
        printf("Queue is empty. Cannot remove person.\n");
        return;
    }
    Person person = queue->data[queue->front];
    queue->front = (queue->front + 1) % MAX_SIZE;
    queue->size--;
    printf("%s left the queue.\n", person.name);
}

int getQueueLength(Queue *queue)
{
    return queue->size;
}

int main()
{
    Queue *queue = createQueue();

    enqueue(queue, (Person){"John", 25});
    enqueue(queue, (Person){"Mary", 30});
    enqueue(queue, (Person){"Bob", 40});

    printf("Queue length: %d\n", getQueueLength(queue));

    dequeue(queue);

    enqueue(queue, (Person){"Alice", 20});

    printf("Queue length: %d\n", getQueueLength(queue));

    while (!isEmpty(queue))
    {
        dequeue(queue);
    }

    printf("Queue length: %d\n", getQueueLength(queue));

    return 0;
}

vector<int> find(int a[], int n , int x )
{
    // code here
    vector<int> map;
    int flag=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            flag=1;
            map.push_back(i);
            break;
        }
    }
    for(int i=n-1;i>=0;i--)
    {
        if(a[i]==x)
        {
            flag=1;
            map.push_back(i);
            break;
        }
    }
    if(flag==0)
    {
        map.push_back(-1);
        map.push_back(-1);
        return map;
    }
    return map;
}