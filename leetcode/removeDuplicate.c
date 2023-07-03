#include <stdio.h>
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
struct node *deleteNode(struct node *head, struct node *newHead, struct node *del)
{
    if (head == NULL)
    {
        return head;
    }
    struct node *ptr = newHead;
    struct node *temp;
    while (ptr != NULL)
    {
        if (ptr == del)
        {
            if (head == ptr)
            {
                head = head->next;
            }
            else if (ptr->next == NULL)
            {
                temp->next = NULL;
            }
            else
            {
                temp->next = ptr->next;
            }
            break;
        }
        temp = ptr;
        ptr = ptr->next;
    }
    return head;
}
struct node *removeDuplicates(struct node *head)
{
    if (head == NULL)
    {
        return head;
    }
    struct node *ptr1 = head;
    struct node *temp;
    struct node *ptr2;
    while (ptr1 != NULL)
    {
        ptr2 = ptr1->next;
        while (ptr2 != NULL)
        {
            temp = ptr1;    
            if (ptr1->data == ptr2->data)
            {
                while (temp->next != ptr2)
                {
                    temp = temp->next;
                }
                temp->next = ptr2->next;
            }
            ptr2 = ptr2->next;
        }
        ptr1 = ptr1->next;
    }
    return head;
}
int main()
{
    struct node *head = NULL;
    head = insertLast(head, 3);
    head = insertLast(head, 4);
    head = insertLast(head, 5);
    head = insertLast(head, 5);
    head = insertLast(head, 3);
    head = insertLast(head, 6);
    // head = insertLast(head,6);
    // head = insertLast(head,6);
    // head = insertLast(head,6);
    // head = insertLast(head,6);
    // head = insertLast(head,6);
    head = removeDuplicates(head);
    display(head);
}