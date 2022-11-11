#include <stdio.h>
#include <stdlib.h>
// A Linked List Node
struct Node
{
    int data;
    struct Node* next;
};
// Helper function to create a new node with the given data and
// pushes it onto the list's front
void push(struct Node** head, int data)
{
    // create a new linked list node from the heap
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

    newNode->data = data;
    newNode->next = *head;
    *head = newNode;
}
// Iterative function to return the k'th node from the end in a linked list
struct Node* findKthNode(struct Node* head, int k)
{
    int n = 0;
    struct Node* curr = head;
    // count the total number of nodes in the linked list
    while (curr)
    {
        curr = curr->next;
        n++;
    }
    // if the total number of nodes is more than or equal to `k`
    if (n >= k)
    {
        // return (n-k+1)'th node from the beginning
        curr = head;
        for (int i = 0; i < n - k; i++) {
            curr = curr->next;
        }
    }

    return curr;
}

int main(void)
{
    // input keys
   int keys[100],n,j;
    printf("Enter the number of elements in list: ");
    scanf("%d",&n);
    printf("Enter the elements of list: ");
    for(j=0;j<n;j++)
    {
        scanf("%d",&keys[j]);
    }
    struct Node* head = NULL;
    for (int i = n - 1; i >= 0; i--) {
        push(&head, keys[i]);
    }
    int k;
    printf("Enter the kth value: ");
    scanf("%d",&k);
    struct Node* node = findKthNode(head, k);

    if (node) {
        printf("k'th node from the end is %d", node->data);
    }

    return 0;
}
