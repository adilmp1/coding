#include <stdio.h>
#include <stdlib.h>
struct item
{
    int key;
    int value;
};
struct hashtable_item
{
    int flag;
    struct item *data;
};
int size = 0;
int MAX = 10;
struct hashtable_item arr[10];
void InitArray()
{
    int i;
    for (i = 0; i < MAX; i++)
    {
        arr[i].flag = 0;
        arr[i].data = NULL;
    }
}
int hashcode(int key)
{
    return (key % MAX);
}
void insert(int key, int value)
{
    int index = hashcode(key);
    int i = index;
    struct item *new_item = (struct item *)malloc(sizeof(struct item));
    new_item->key = key;
    new_item->value = value;
    while (arr[i].flag == 1)
    {
        if (arr[i].data->key == key)
        {
            printf("\n Key already exists, hence updating its value \n");
            arr[i].data->value = value;
            return;
        }
        i = (i + 1) % MAX;
        if (i == index)
        {
            printf("\n Hash table is full, Can't insert\n");
            return;
        }
    }
    arr[i].flag = 1;
    arr[i].data = new_item;
    size++;
    printf("\n%d inserted \n", key);
}
void remove_element(int key)
{
    int index = hashcode(key);
    int i = index;
    while (arr[i].flag != 0)
    {
        if (arr[i].flag == 1 && arr[i].data->key == key)
        {
            arr[i].flag = 2;
            arr[i].data = NULL;
            size--;
            printf("\n%d removed \n", key);
            return;
        }
        i = (i + 1) % MAX;
        if (i == index)
        {
            break;
        }
    }
    printf("\n This key does not exist \n");
}
void display()
{
    int i;
    for (i = 0; i < MAX; i++)
    {
        struct item *current = (struct item *)arr[i].data;
        if (current == NULL)
        {
            printf("\n arr[%d] has no elements \n", i);
        }
        else
        {
            printf("\n arr[%d] has elements: %d (key) and %d(value)\n", i, current->key, current->value);
        }
    }
}
int hashTableSize()
{
    return size;
}
void main()
{
    int choice, key, value, n;
    printf("\n1.Insert item in the Hashtable"
               "\n2.Delete item from the Hashtable"
               "\n3.Size of Hashtable"
               "\n4.Display"
               "\n5.Exit");
    InitArray();
    do
    {
        printf("\n\nPlease enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
                printf("Inserting element in Hashtable\n");
                printf("Enter key and value: \t");
                scanf("%d%d", &key, &value);
                insert(key, value);
                break;
            case 2:
                printf("Deleting in Hashtable \n Enter the key to delete-:");
                scanf("%d", &key);
                remove_element(key);
                break;
            case 3:
                n = hashTableSize();
                printf("Size of Hashtable is: %d\n", n);
                break;
            case 4:
                display();
                break;
            case 5:
                printf("Exit");
                exit(0);
                break;
            default:
                printf("Enter valid Input\n");
        }
    } while (1);
}