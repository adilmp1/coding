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
struct node *AddLists(struct node *head1, struct node *head2)
{
    struct node *head3 = NULL;
    int carry = 0;
    struct node *ptr1 = head1;
    struct node *ptr2 = head2;
    while (ptr1 != NULL || ptr2 != NULL)
    {
        if (ptr1 != NULL && ptr2 != NULL)
        {
            int sum = ptr1->data + ptr2->data;
            if ((carry + sum) < 10)
            {
                head3 = insertFront(head3, (carry + sum));
                carry = 0;
            }
            else
            {
                head3 = insertFront(head3, (carry + sum) % 10);
                carry = 1;
            }
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }
        else if (ptr1 != NULL)
        {
            int sum = ptr1->data;
            if ((carry + sum) < 10)
            {
                head3 = insertFront(head3, (carry + sum));
                carry = 0;
            }
            else
            {
                head3 = insertFront(head3, (carry + sum) % 10);
                carry = 1;
            }
            ptr1 = ptr1->next;
        }
        else
        {
            int sum = ptr2->data;
            if ((carry + sum) < 10)
            {
                head3 = insertFront(head3, (carry + sum));
                carry = 0;
            }
            else
            {
                head3 = insertFront(head3, (carry + sum) % 10);
                carry = 1;
            }
            ptr2 = ptr2->next;
        }
    }
    if (carry != 0)
    {
        head3 = insertFront(head3, carry);
    }
    return reverse(head3);
}
int isPrime(int no)
{
    if (no == 1 || no == 0)
    {
        return 0;
    }
    for (int i = 2; i <= no / 2; i++)
    {
        if (no % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int closestPrime(int n)
{
    int i, j;
    int count1 = 0;
    int count2 = 0;
    for (i = n; isPrime(i) != 1; i++, count1++)
        ;
    for (j = n; isPrime(j) != 1 && j >= 2; j--, count2++)
        ;
    if (count1 >= count2)
    {
        return j;
    }
    return i;
}
struct node *primeList(struct node *head)
{
    if (head == NULL)
    {
        return head;
    }
    struct node *ptr = head;
    while (ptr != NULL)
    {
        ptr->data = closestPrime(ptr->data);
        ptr = ptr->next;
    }
    return head;
}
int main()
{
    struct node *head1 = NULL;
    head1 = insertLast(head1, 2);
    head1 = insertLast(head1, 6);
    head1 = insertLast(head1, 10);
    head1 = primeList(head1);
    display(head1);
}

int binarysearch(int a[], int n, int k)
{
    int f = 0;
    int l = n - 1;
    int m;
    while (f <= l)
    {
        m = (f + l) / 2;
        if (a[m] == k)
        {
            return m;
        }
        else if (a[m] > k)
        {
            l = m - 1;
        }
        else
        {
            f = m + 1;
        }
    }
    return -1;
}