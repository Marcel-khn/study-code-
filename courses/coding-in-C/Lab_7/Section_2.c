#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node {
    double data; 
    struct Node *pNext;
}Node;

void insertAfter(Node* pNode, Node* pNewNode, double *data);
void create(Node* pNode, Node *pHead, int value);

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

void create(Node *pNode, Node *pHead, int value)
{
    Node* pNewNode;
    if (pHead == NULL)
    {
        pHead->data = value;
        pHead->pNext = NULL;
    }
    else 
    {
        while (pNode != NULL)
        {
            pNewNode->pNext = pNode->pNext;
            pNode->pNext = pNewNode;
        }
        
    }
    
}
void insertAfter(Node* pNode, Node* pNewNode, double *data)
{
    pNewNode->pNext = pNode->pNext;
    pNode->pNext = pNewNode;
    pNode->data = *data *2;
}
