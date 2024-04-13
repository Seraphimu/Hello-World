#include "Queue.h"
void Test()
{
    SqQueue Q;
    InitQueue(&Q);
    EnQueue(&Q, 1);
    EnQueue(&Q, 1);
    EnQueue(&Q, 4);
    EnQueue(&Q, 5);
    EnQueue(&Q, 1);
    printf("%d\n", LengthQueue(Q));
    DeQueue(&Q); 
    printf("%d\n", LengthQueue(Q));
    EnQueue(&Q, 4);
    printf("%d\n", LengthQueue(Q));

    for (int i = 0; i < MAX; i++)
        printf("%d ", Q.data[i]);
    printf("\n");
    MakeEmpty(&Q);
    for (int i = 0; i < MAX; i++)
        printf("%d ", Q.data[i]);

    printf("\n");
}
int main(void)
{
    Test();

    return 0;
}
