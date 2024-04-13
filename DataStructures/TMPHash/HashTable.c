#include "HashTable.h"

int m = 0;
void HashInit(struct HashTable * H)
{
    int i;
    m = HASHMAX;
    H->count = m;
    H->elem = (int *)malloc(sizeof(int) * HASHMAX);

    for (i = 0; i < m; i++)
        H->elem[i] = NULLKEY;
}

int HashMod(int key)
{
    return key % m;
}

void InsertHash(struct HashTable * H, int key)
{
    int addr = HashMod(key);
    
    while (H->elem[addr] != NULLKEY)    //add 1 to addr, if index isn't NULL
        addr = (addr + 1) % m;
    H->elem[addr] = key;
}

int SearchHash(struct HashTable H, int key, int * addr)
{
    *addr = HashMod(key);
    while (H.elem[*addr] != key)
    {
        *addr = (*addr + 1) % m;
        if (H.elem[*addr] == NULLKEY || *addr == HashMod(key))
        {
            return 0;
        }
    }

    return 1;
}
