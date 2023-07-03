#include <stdio.h>
#include <math.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *createNode(int data)
{
    struct node *new = (struct node *)malloc(sizeof(struct node));
    new->data = data;
    new->next = NULL;
    return new;
}
struct node *insertFront(struct node *head, int data)
{
    if (head == NULL)
    {
        return createNode(data);
    }
    else
    {
        struct node *ptr = createNode(data);
        ptr->next = head;
        head = ptr;
        return head;
    }
}
void display(struct node *head)
{
    struct node *ptr = head;
    printf("\n");
    if (ptr == NULL)
    {
        printf("List is Empty");
    }
    else
    {
        while (ptr != NULL)
        {
            printf("%d ", ptr->data);
            ptr = ptr->next;
        }
    }
}
struct node *insertLast(struct node *head, int data)
{
    if (head == NULL)
    {
        return createNode(data);
    }
    else
    {
        struct node *new = createNode(data);
        struct node *ptr = head;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = new;
        return head;
    }
}
struct node *reverse(struct node *head)
{
    struct node *prev;
    struct node *next;
    struct node *current;
    prev = NULL;
    next = head;
    current = head;
    while (next != NULL)
    {
        next = next->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
    return head;
}
struct node *deleteValue(struct node *head, struct node *nodeD)
{
    struct node *ptr = head;
    struct node *temp;
    if (head == NULL)
    {
        return head;
    }
    if (head == nodeD)
    {
        head = head->next;
    }
    else
    {
        while (ptr != nodeD && ptr != NULL)
        {
            temp = ptr;
            ptr = ptr->next;
        }
        temp->next = ptr->next;
    }
    return head;
}
struct node * addOne(struct node * head)
{
    int carry=1;
    if(head==NULL)
    {
        return head;
    }
    head=reverse(head);
    struct node * temp;
    struct node * ptr = head;
    while(ptr!=NULL)
    {
        if(ptr->data == 9)
        {
            ptr->data+=carry;
            if(ptr->data == 10)
            {
                ptr->data =0;
                carry=1;
            }
        }
        else
        {
            ptr->data = ptr->data+carry;
            carry=0;
        }
        temp=ptr;
        ptr=ptr->next;
    }
    if(carry==1)
    {
        temp->next = createNode(1);
    }
    return reverse(head);
}
int main()
{
    struct node *head = NULL;
    head = insertLast(head, 9);
    head = insertLast(head, 3);
    head = insertLast(head, 5);
    head = insertLast(head, 0);
    head = insertLast(head, 9);
    head = addOne(head);
    display(head);
    
}