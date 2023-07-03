#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL;
struct node *createNode(int data)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
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
void display(struct node *head)
{
    if (head == NULL)
    {
        printf("List is Empty");
    }
    else
    {
        struct node *ptr = head;
        while (ptr != NULL)
        {
            printf("%d ", ptr->data);
            ptr = ptr->next;
        }
    }
}
void deleteNode(int data)
{
    struct node *ptr = head;
    struct node *temp;
    if (ptr->data == data)
    {
        head = ptr->next;
        free(ptr);
    }
    else
    {
        while (ptr->data != data && ptr->next != NULL)
        {
            temp = ptr;
            ptr = ptr->next;
        }
        if (ptr->next == NULL)
        {
            printf("Element not Found");
        }
        temp->next = ptr->next;
        free(ptr);
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
struct node *compute(struct node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    head = reverse(head);
    struct node *ptr = head;
    struct node *temp = head;
    int min = head->data;
    while (ptr != NULL)
    {
        if (min <= ptr->data)
        {
            min = ptr->data;
            temp = ptr;
            ptr = ptr->next;
        }
        else
        {
            temp->next = ptr->next;
            ptr = ptr->next;
        }
    }
    head = reverse(head);
    return head;
}   
int main()
{
    struct node *head = NULL;
    head = insertLast(head, 12);
    head = insertLast(head, 15);
    head = insertLast(head, 10);
    head = insertLast(head, 11);
    head = insertLast(head, 5);
    head = insertLast(head, 6);
    head = insertLast(head, 2);
    head = insertLast(head, 3);
    // int a[]={32,433,636,121,831,102,695,509,104,776,905,876,219,202,326,393,141,752,504,109,640,765,537,759,971,857,147,716,897,484,60,928,268,47,48,98,500,94,607,603,221,863,831,439,416,156,183,556,259,686,16,250,450,552,9,772,409,155,487,305,990,898,232,258,945,631,707,444,724,313,47,296,527,229,734,942,736,268,849,995,953,865,244,754,416,604,526,176,110,364,832,100,262};
    // for(int i=0;i<93;i++)
    // {
    //     head = insertLast(head,a[i]);
    // }
    display(compute(head));
}