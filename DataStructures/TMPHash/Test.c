#include "HashTable.h"

void Test()
{
    //A structure that have an array of int and length of the array.
    struct HashTable H;
    HashInit(&H);
    InsertHash(&H, 1);
    InsertHash(&H, 1);
    InsertHash(&H, 4);
    InsertHash(&H, 5);
    InsertHash(&H, 1);
    InsertHash(&H, 4);

    for (int i = 0; i < H.count; i++)
    {
        printf("H.elem[%d] = %d\n", i, H.elem[i]);
    }
}

int main(void)
{
    Test();
    
    return 0;
}
