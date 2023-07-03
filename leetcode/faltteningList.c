#include <stdio.h>
#include <math.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *bottom;
};
struct node *createNode(int data)
{
    struct node *new = (struct node *)malloc(sizeof(struct node));
    new->data = data;
    new->next = NULL;
    new->bottom = NULL;
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
            ptr = ptr->bottom;
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
struct node *AddWithSort(struct node *head, int data)
{

    if(head==NULL)
    {
        return createNode(data);
    }
    struct node *ptr = head;
    struct node *temp = head;
    struct node *newNode = createNode(data);
    if (head->data > data)
    {
        newNode->bottom = head;
        head = newNode;
        return head;
    }
    while (ptr->data < data && ptr->bottom!= NULL)
    {
        temp = ptr;
        ptr = ptr->bottom;
    }
    if (ptr->data < data)
    {
        ptr->bottom = newNode;
        return head;
    }
    newNode->bottom = temp->bottom;
    temp->bottom = newNode;
    return head;
}
struct node *flatten(struct node *head)
{
    if (head == NULL || head->bottom == NULL && head->next == NULL)
    {
        return head;
    }
    struct node *ptr = head;
    struct node *bt;
    while (ptr->next != NULL)
    {
        bt = ptr->next;
        while (bt != NULL)
        {
            head = AddWithSort(head, bt->data);
            bt = bt->bottom;
            // ptr->bottom = bt->bottom;
        }
        ptr = ptr->next;
    }
    return head;
}
int main()
{
    struct node *head = NULL;
    head = insertLast(head, 5);
    head = insertLast(head, 10);
    head = insertLast(head, 19);
    head = insertLast(head, 28);
    head->bottom = createNode(7);
    head->bottom->bottom = createNode(8);
    head->bottom->bottom->bottom = createNode(30);

    head->next->bottom = createNode(20);

    head->next->next->bottom = createNode(22);
    head->next->next->bottom->bottom = createNode(50);

    head->next->next->next->bottom = createNode(35);
    head->next->next->next->bottom->bottom = createNode(40);
    head->next->next->next->bottom->bottom->bottom = createNode(45);
    // head = AddWithSort(head,-1);
    // head = AddWithSort(head,10);
    // head = AddWithSort(head,0);
    // head = AddWithSort(head,100);
    // head = AddWithSort(head,11);
    // head = AddWithSort(head,1);
    // head = AddWithSort(head,10001);
    // head = AddWithSort(head,100011);

    head = flatten(head);
    display(head);
}