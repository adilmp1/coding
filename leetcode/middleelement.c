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
struct node * middleNode(struct node *head)
{
    if (head == NULL || head->next==NULL)
    {
        return head;
    }
    struct node * slow = head;
    struct node * fast = slow->next;
    while(fast!=NULL)
    {
        slow=slow->next;
        if(fast->next==NULL)
        {
            fast=NULL;
        }
        else
        {
            fast=fast->next->next;
        }
    }
    return slow;
}
int main()
{
    struct node *head = NULL;
    struct node *head1 = NULL;
    // head = insertLast(head, 1);
    head = insertLast(head, 2);
    // head = insertLast(head, 3);
    head = insertLast(head, 4);
    // head = insertLast(head, 5);
    // head = insertLast(head, 6);
    head1 = middleNode(head);
    display(head1);
}