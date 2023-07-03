#include <stdio.h>
int stack[10];
int top=-1;
void push(int x)
{
    if(top==(5-1))
    {
        printf("Stack overflow");
    }
    else
    {
        top++;
        stack[top]=x;
    }
}

void pop()
{
    int item;
    if(top==-1)
    {
        printf("Stack underflow");
    }
    else
    {
        item=stack[top];
        top--;
        printf("%d\n",item);
    }
}
void display()
{
    int i;
    for(i=top;i>=0;i--)
    {
        printf("%d\n",stack[i]);
    }
}
int main()
{
    push(10);
    push(11);
    push(12);
    push(13);
    push(14);
    pop();
    pop();
    pop();
}