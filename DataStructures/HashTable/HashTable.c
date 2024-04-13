#include "HashTable.h"

int m = 0;

void HTInit(HT * H)
{
    int i;

    H->elem = (int *)malloc(sizeof(int) * MAX);
    
    for (i = 0; i < MAX; i++)
        H->elem[i] = NULLKEY;
}
int HTMod(int key)
{
   return key % MAX; 
}
void HTInsert(HT * H, int key)
{
    int addr = HTMod(key);
    while (H->elem[addr] != NULLKEY) //如果当前addr位不为空，则继续+1，找下一个位置
        addr = (addr + 1) % MAX;
    H->elem[addr] = key;             //存入值
}
