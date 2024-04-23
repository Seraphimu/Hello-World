#include <stdio.h>
typedef int ElementType;

void InserationSort(ElementType A[], int N)
{
    int j, P;

    ElementType Tmp;
    for (P = 1; P < N; P++)
    {
        Tmp = A[P];
        for (j = P; j > 0 && A[j - 1] > Tmp; j--)
        {
            A[j] = A[j - 1];
        }
        A[j] = Tmp;
    }
}

int main(void)
{
    int A[] = {-65535, 1, 2, 3, 4, 5, 0};
    InserationSort(A, 7);

    return 0;
}
