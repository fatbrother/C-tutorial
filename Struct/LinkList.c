#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

Node* createNode(int data)
{
    Node *node = (Node*)malloc(sizeof(Node));
    node->data = data;
    node->next = NULL;
    return node;
}

void deleteNode(int index, Node *head)
{
    Node *node = head;
    for (int i = 0; i < index - 1; i++)
    {
        node = node->next;
    }
    Node *next = node->next;
    node->next = next->next;
    free(next);
}

void insertNode(int index, int data, Node *head)
{
    Node *node = head;
    for (int i = 0; i < index - 1; i++)
    {
        node = node->next;
    }
    Node *next = node->next;
    node->next = createNode(data);
    node->next->next = next;
}

void printList(Node *head)
{
    Node *current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
}

int main()
{
    Node *head = createNode(0);
    Node* current = head;
    for (int i = 1; i < 10; i++) {
        current->next = createNode(i);
        current = current->next;
    }
    printList(head);
    return 0;
}