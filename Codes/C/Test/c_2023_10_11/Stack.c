#include <stdio.h>
#define MAX 100

int Stack[MAX];
int StackPointer = 0;

void Push(int data);
int Pop(void);
void Test(void);

int main(void)
{
    Test();

    return 0;
}


void Push(int data)
{
    Stack[StackPointer] = data;
    StackPointer++;
}
int Pop(void)
{
    StackPointer--;
    return Stack[StackPointer];
}

void Test(void)
{
    Push(1);
    Push(2);
    Push(3);
    Push(4);
    Pop();
    Pop();
    for (int i = 0; i < StackPointer; ++i) {
        printf("%d ", Stack[i]);
    }
}

//void Test(void)
//{
//    int i;
//    
//    //入栈
//    Push(1);
//    Push(3);
//    Push(5);
//    for (i = 0; i < StackPointer; ++i) {
//        printf("%d ", Stack[i]);
//    }
//    printf("\n");
//    Pop();
//    printf("%d ", Stack[StackPointer]);
//    Pop();
//    printf("%d ", Stack[StackPointer]);
//    Pop();
//    printf("%d ", Stack[StackPointer]);
//    printf("\n");
//}
