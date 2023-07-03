#include <stdio.h>
#include <stdlib.h>

// Define a struct to represent an employee
typedef struct Employee
{
    int id;
    char name[50];
    float salary;
} Employee;

// Define a struct to represent a node in the binary search tree
typedef struct Node
{
    Employee data;
    struct Node *left;
    struct Node *right;
} Node;

// Function to create a new node
Node *createNode(Employee emp)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = emp;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Function to insert a new employee into the binary search tree
Node *insert(Node *root, Employee emp)
{
    if (root == NULL)
    {
        return createNode(emp);
    }
    else if (emp.id < root->data.id)
    {
        root->left = insert(root->left, emp);
    }
    else if (emp.id > root->data.id)
    {
        root->right = insert(root->right, emp);
    }
    return root;
}

// Function to search for an employee by their ID
void *search(Node *root, int id)
{
    if (root == NULL || root->data.id == id)
    {
        if(root==NULL)
        {
            printf("No Employee found wtih the ID");
        }
        else
        {
            printf("\nEmployee ID: %d");
            printf("\nEmployee Name: ");
            puts(root->data.name);
            printf("Employee Salary: %f",root->data.salary);
        }
    }
    else if (id < root->data.id)
    {
        return search(root->left, id);
    }
    else
    {
        return search(root->right, id);
    }
}

// Function to find the node with the minimum value in a binary search tree
Node *findMin(Node *root)
{
    while (root && root->left != NULL)
    {
        root = root->left;
    }
    return root;
}

// Function to remove an employee from the binary search tree
Node *deleteNode(Node *root, int id)
{
    if (root == NULL)
    {
        return root;
    }
    if (id < root->data.id)
    {
        root->left = deleteNode(root->left, id);
    }   
    else if (id > root->data.id)
    {
        root->right = deleteNode(root->right, id);
    }
    else
    {
        if (root->left == NULL)
        {
            root=root->right;
        }
        else if(root->right==NULL)
        {
            root=root->left;
        }
        else
        {
            Node * temp = findMin(root->right);
            root->data = temp->data;
            root->right = deleteNode(root->right,temp->data.id);
        }
    }
}
int main()
{
    Node * root=NULL;
    Employee e1 = {1001,"John Durairaj",4000.0};
    Employee e2 = {1002,"Robert Downey",8000.0};
    Employee e3 = {1003,"Mark RJ",6000.0};
    root = insert(root,e1);
    root = insert(root,e2);
    root = insert(root,e3);
    root = deleteNode(root,1001);
    search(root,1001);
}