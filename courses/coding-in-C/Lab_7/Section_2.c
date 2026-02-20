#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node {
    double data; 
    struct Node *pNext;
}Node;

void insertAfter(Node* pNode, Node* pNewNode, double *data);
void create(Node* pNode, int value);

int main()
{
    struct Node *pNode = malloc(sizeof(pNode));
    if (!pNode)
    {
        return -1;
    } 
    
    for (int i = 0; i < 50; i++)
    {
        create
    }
}


struct Node *pHead = NULL;

void create(Node *pNode, int value)
{
    if (pNode == NULL)
    {
        
    }
    pNode->data = value;
    pNode->pNext = NULL;
}
void insertAfter(Node* pNode, Node* pNewNode, double *data)
{
    pNewNode->pNext = pNode->pNext;
    pNode->pNext = pNewNode;
    pNode->data = *data *2;
}
