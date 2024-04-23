#include <stdio.h>
#include <stdbli.h>

typedef int DLDataType;

typedef struct DList {
    DLDataType X;
    struct DList * Prev;
    struct DList * Next;
}DL;

void DLInit(DL ** PPHead);
DL * DLBuyCapacity(DLDataType X);
void DLPushBack(DL ** PPHead, DLDataType X);

int main()
{
    

    return 0;
}

void DLInit(DL ** PPHead)
{
    *PPHead == NULL;
}

DL * DLBuyCapacity(DLDataType X)
{
    DL * NewNode = (DL *)malloc(sizeof (DL));
    
    if (NewNode == NULL)
    {
        printf("Malloc Error\n");
        exit(-1);
    }
    
    NewNode->X = X;
    NewNode->Prev = NULL;
    NewNode->Next = NULL;

    return NewNode;

}
void DLPushBack(DL ** PPHead, DLDataType X)
{
    DL * NewNode = DLBuyCapacity(X);
    if (*PPHead == NULL)
    {
        *PPHead = NewNode;
    }
    else
    {
        DL * Tail = *PPHead;
        while (Tail->Next->Next != NULL)
        {
            Tail = Tail->Next;
        }
        Tail->Next
    }
}
