#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node * left;
    struct Node * right;
};
struct Node * createNode(int data)
{
    struct Node * n = (struct Node *)malloc(sizeof(struct Node));
    n->data = data;
    n->left=NULL;
    n->right=NULL;
    return n;
}
void inOrder(struct Node * root)
{
    if(root!=NULL)
    {
       inOrder(root->left);
       printf("%d\n",root->data);
       inOrder(root->right);
    }
}

void preOrder(struct Node * root)
{
    if(root!=NULL)
    {
        printf("%d\n",root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}

void postOrder(struct Node * root)
{
    if(root!=NULL)
    {
        postOrder(root->left);
        postOrder(root->right);
        printf("%d\n",root->data);
    }
}

void insert(struct Node * root, int key)
{
    struct Node * prev = NULL;  
    while(root!=NULL)
    {
        prev = root;
        if(key==root->data)
        {
            printf("Element already exists !");
        }
        else if(key<root->data)
        {
            root=root->left;
        }
        else
        {
            root=root->right;
        }
    }
    struct Node * new = (struct Node *)malloc(sizeof(struct Node));
    new->data = key;
    if(key<prev->data)
    {
        prev->left=new;
    }
    else
    {
        prev->right=new;
    }
}
struct Node * inOrderPredecessor(struct Node * root)
{
    root=root->left;
    while(root->right!=NULL)
    {
        root=root->right;
    }
    return root;
}

struct Node * deleteNode(struct Node * root, int value)
{
    struct Node * iPre;
    if(root==NULL)
    {
        return NULL;
    }
    if(root->left==NULL && root->right ==NULL)
    {
        free(root);
        return NULL;
    }

    if(value<root->data)
    {
        root->left=deleteNode(root->left,value);
    }
    else if(value>root->data)
    {
        root->right=deleteNode(root->right,value);
    }
    else
    {
        iPre=inOrderPredecessor(root);
        root->data = iPre->data;
        root->left = deleteNode(root->left,iPre->data);
    }
    return root;
}

struct Node * search(struct Node * root, int key)
{
    if(root==NULL)
    {
        return NULL;
    }
    else if(root->data==key)
    {
        return root;
    }
    else if(key<root->data)
    {
        return search(root->left,key);
    }
    else
    {
        return search(root->right,key);
    }
}

void getMaxValue(struct Node * root)
{
    while(root->right!=NULL)
    {
        root=root->right;
    }
    printf("\n%d",root->data);
}

void getMinValue(struct Node * root)
{
    while(root->left!=NULL)
    {
        root=root->left;
    }
    printf("\n%d",root->data);
}
int main()
{
    struct Node * p = createNode(5);
    struct Node * p1 = createNode(3);
    struct Node * p2 = createNode(6);
    struct Node * p3 = createNode(1);
    struct Node * p4 = createNode(4);
    system("clear");
    p->left=p1;
    p->right=p2;
    p1->left=p3;
    p1->right=p4;
    inOrder(p);
    // struct Node * n = search(p,3);
    // if(n!=NULL)
    // {
    //     printf("\nFound");
    // }
    // else
    // {
    //     printf("\nNot Found");
    // }
    getMaxValue(p);
    getMinValue(p);
}