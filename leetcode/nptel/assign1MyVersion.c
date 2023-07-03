#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node
{
    char name[50];
    int RollNo;
    float marks[5];
    struct Node *next; 
};

struct Node *head = NULL;

void AddStudent()
{
    struct Node *new = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter the name of the student: ");
    scanf("%s",&new->name);
    printf("Enter the roll no: ");
    scanf("%d",&new->RollNo);
    float mark[5];
    printf("Enter mark of 5 subjects: ");
    for(int i=0;i<5;i++)
    {
        scanf("%f",mark+i);
        new->marks[i]=mark[i];
    }
    if(head==NULL)
    {
        head=new;
    }
    else
    {
        new->next = head;
        head=new;
    }
}

void DeleteStudent(int RollNo)
{
    struct Node *current = head;
    struct Node *previous = NULL;
    while (current != NULL)
    {
        if (current->RollNo == RollNo)
        {
            if (previous == NULL)
            {
                head = current->next;
            }
            else
            {
                previous->next = current->next;
            }
            free(current);
            return;
        }
        previous = current;
        current = current->next;
    }
    printf("Student with roll number %d not found.\n", RollNo);
}

void SearchStudent(int RollNo)
{
    printf("\n");
    struct Node *current = head;
    while (current != NULL)
    {
        if (current->RollNo == RollNo)
        {
            printf("Name: %s\n", current->name);
            printf("Roll number: %d\n", current->RollNo);
            printf("Marks: ");
            for (int i = 0; i < 5; i++)
            {
                printf("%.2f ", current->marks[i]);
            }
            printf("\n");
            return;
        }
        current = current->next;
    }
    printf("Student with roll number %d not found.\n", RollNo);
}

int main()
{
    AddStudent();
    DeleteStudent(100);
    SearchStudent(100);
    return 0;
}
