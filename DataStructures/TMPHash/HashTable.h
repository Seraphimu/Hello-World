#include <stdio.h>
#include <stdlib.h>

#define HASHMAX 12
#define NULLKEY -32768

struct HashTable
{
    int * elem;
    int count;
};

void HashInit(struct HashTable * H);
int HashMod(int key);
void InsertHash(struct HashTable * H, int key);
int SearchHash(struct HashTable H, int key, int * addr);
