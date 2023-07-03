#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int size;
    int top;
    int * arr;
};

int pop(struct stack *ptr)
{
    if(isEmpty(ptr))
    {
        printf("Stack Underflow");
    }
    else
    {
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

void push(struct stack *ptr, int val)
{
    if(isFull(ptr))
    {
        printf("Stack Overflow");
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top]=val;
    }
}
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
    struct stack * sp = (struct stack * )malloc(sizeof(struct stack));
    system("clear");
    sp->size=10;
    sp->top=-1;
    sp->arr= (int *)malloc(sp->size * sizeof(int));
    printf("stack has been craeted successfully");

    printf("\n%d",isFull(sp));
    printf("\n%d",isEmpty(sp));
    push(sp,50);
    push(sp,50);
    push(sp,50);
    push(sp,50);
    push(sp,50);
    push(sp,50);
    push(sp,50);
    push(sp,50);
    push(sp,50);
    push(sp,50);
    push(sp,50);//pushed 10 values
    printf("\n%d",isFull(sp));//stack ovefflow since the size of the stack is 10    
    printf("\n%d",isEmpty(sp));

    printf("\npopped %d from the stack",pop(sp));
    printf("\npopped %d from the stack",pop(sp));
    printf("\npopped %d from the stack",pop(sp));
    return 0;
}   