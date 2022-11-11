// A simple inorder traversal based C++ program
// to find k-th smallest element in a BST.
#include <stdio.h>
#include <stdlib.h>
typedef struct Node
{
    int data;
    struct Node *left, *right;
} Node;
struct Node* new_node(int x)
{
    struct Node* p = malloc(sizeof(struct Node));
    p->data = x;
    p->left = NULL;
    p->right = NULL;
    return p;
}
Node* insert(Node* root, int x)
{
    if (root == NULL)
        return new_node(x);
    if (x < root->data)
        root->left = insert(root->left, x);
    else if (x > root->data)
        root->right = insert(root->right, x);
    return root;

// Function to find k'th smallest element in BST
// Here count denotes the number of nodes processed so far
    int count = 0;
    Node* kthSmallest(Node* root, int k)
    {
        // base case
        if (root == NULL)
            return NULL;
        // search in left subtree
        Node* left = kthSmallest(root->left, k);
        // if k'th smallest is found in left subtree, return it
        if (left != NULL)
            return left;
        // if current element is k'th smallest, return it
        printf("%d ",root->data);
        count++;
        if (count == k)
            return root;
        // else search in right subtree
        return kthSmallest(root->right, k);
    }
// Function to print k'th smallest element in BST
    void printKthSmallest(Node* root, int k)
    {
        // maintain index to count number of nodes processed so far
        Node* res = kthSmallest(root, k);
        if (res == NULL)
            printf("There are less than k nodes in the BST");
        else
            printf("K-th Smallest Element is %d", res->data);
    }
// main function
    int main()
    {
        Node* root = NULL;
        int keys[] = { 20, 8, 22, 4, 12, 10, 14,33, 11, 29};
        int keys_size = sizeof(keys) / sizeof(keys[0]);

        for (int i = 0; i < keys_size; i++)
            root = insert(root, keys[i]);

        int k = 5;
        printKthSmallest(root, k);
        return 0;
    }




