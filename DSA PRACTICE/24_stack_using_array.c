#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int size;
    int top;
    int * arr;
};

int isEmpty(struct stack* ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(struct stack* ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
        return 0;
}
int main()
{
    struct stack *s;
    s = (struct stack *)malloc(sizeof(struct stack));
    s->size = 80;
    s->top = -1;
    s->arr = (int*)malloc(s->size * sizeof(int));

    if(isEmpty(s) == 1)
    {
        printf("Stack is empty");
    }
    else
    {
        printf("Stack is not empty");
    }
}