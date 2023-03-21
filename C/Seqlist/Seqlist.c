#include <stdio.h>
#define MAX 100
typedef struct s
{
    int data[MAX];
    int len;
}seq;

void Create(seq * L, int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        L->data[i] = arr[i];
    L->len = i;
}

void Dis(seq * L)
{
    int i;
    for (i = 0; i < L->len; i++)
        printf("%d ", L->data[i]);
    putchar('\n');
}

void Insert(seq * L, int index, int value)
{
    L->len++;
    int i;
    for (i = L->len - 1; i >= index; i--)
        L->data[i] = L->data[i - 1];
    L->data[index] = value;
}

void Del(seq * L, int index)
{
    int i;
    for (i = index + 1; i < L->len; i++)
    {
        int tmp = L->data[i - 1];
        L->data[i - 1] = L->data[i];
        L->data[i] = tmp;
    }
    L->data[L->len - 1] = 0;
    L->len--;
}

void Cha(seq * L, int index, int value)
{
    L->data[index] = value;
}

void Search(seq * L, int value)
{
    int i;
    int flag = 0;
    for (i = 0; i < L->len; i++)
    {
        if (value == L->data[i])
        {
            printf("下标是%d\n", i);
            flag = 1;
        }
    }
    
    if (flag == 0)
        printf("没找到\n");
}

void Invert(seq * L)
{
    int i = 0;
    int j = L->len - 1;
    while (i < j)
    {
        int tmp = L->data[i];
        L->data[i] = L->data[j];
        L->data[j] = tmp;
        i++;
        j--;
    }
}


int main(void)
{
    seq L;
    int arr[MAX], n, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    Create(&L, arr, n);
    // Invert(&L);
    // Insert(&L, 3, 1919810);
    // Del(&L, 2);
    // Cha(&L, 5, 1919810);
    // Search(&L, 5);

    Dis(&L);

    return 0;
}