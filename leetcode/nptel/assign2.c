#include <stdio.h>
#include <stdlib.h>

// Define a struct to represent an employee
typedef struct Employee {
    int id;
    char name[50];
    float salary;
} Employee;

// Define a struct to represent a node in the binary search tree
typedef struct Node {
    Employee data;
    struct Node* left;
    struct Node* right;
} Node;

// Function to create a new node
Node* createNode(Employee emp) {
    Node* newNode = (Node*) malloc(sizeof(Node));
    newNode->data = emp;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Function to insert a new employee into the binary search tree
Node* insert(Node* root, Employee emp) {
    if (root == NULL) {
        return createNode(emp);
    } else if (emp.id < root->data.id) {
        root->left = insert(root->left, emp);
    } else if (emp.id > root->data.id) {
        root->right = insert(root->right, emp);
    }
    return root;
}

// Function to search for an employee by their ID
Node* search(Node* root, int id) {
    if (root == NULL || root->data.id == id) {
        return root;
    } else if (id < root->data.id) {
        return search(root->left, id);
    } else {
        return search(root->right, id);
    }
}

// Function to find the node with the minimum value in a binary search tree
Node* minValueNode(Node* node) {
    Node* current = node;
    while (current && current->left != NULL) {
        current = current->left;
    }
    return current;
}

// Function to remove an employee from the binary search tree
Node* removeNode(Node* root, int id) {
    if (root == NULL) {
        return root;
    }
    if (id < root->data.id) {
        root->left = removeNode(root->left, id);
    } else if (id > root->data.id) {
        root->right = removeNode(root->right, id);
    } else {
        if (root->left == NULL) {
            Node* temp = root->right;
            free(root);
