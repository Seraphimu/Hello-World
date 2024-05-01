#include "Sorting.h"

int Paration(int Array[], int Low, int High)
{
    int PivotKey = Array[Low];

    while (Low < High)
    {
        while (Low < High && Array[High] > PivotKey)
        {
            High--;
        }

        Swap(&Array[High], &Array[Low]);

        while (Low < High && Array[Low] < PivotKey)
        {
            Low++;
        }

        Swap(&Array[High], &Array[Low]);
    }

    return Low;
}

void QSort(int Array[], int Low, int High)
{
    int Pivot;

    if (Low < High)
    {
        Pivot = Paration(Array, Low, High);
        QSort(Array, Low, Pivot);
        QSort(Array, Pivot + 1, High);
    }
}
