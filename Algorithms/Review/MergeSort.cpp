#include <iostream>
using namespace std;
typedef int ElementType;
using namespace std;

void DisSolution(int A[], int n) {
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    cout << endl;
}

void Merge(ElementType A[], ElementType TmpA[], int LPos, int RPos, int RightEnd) {
    int i, LeftEnd, NumElements, TmpPos;

    LeftEnd = RPos - 1;
    TmpPos = LPos;
    NumElements = RightEnd - RPos + 1;

    while (LPos <= LeftEnd && RPos <= RightEnd) {
        if (A[LPos] <= A[RPos]) {
            TmpA[TmpPos++] = A[LPos++];
        }
        else {
            TmpA[TmpPos++] = A[RPos++];
        }
    }
    while (LPos <= LeftEnd) {
        TmpA[TmpPos++] = A[LPos++];
    }
    while (RPos <= RightEnd) {
        TmpA[TmpPos++] = A[RPos++];
    }

    for (i = 0; i < NumElements; i++, RightEnd--) {
        A[RightEnd] = TmpA[RightEnd];
    }
}

void MSort(ElementType A[], ElementType TmpA[], int Left, int Right) {
    int Center;
    
    if (Left < Right) {
        Center = (Left + Right) / 2;
        MSort(A, TmpA, Left, Center);
        MSort(A, TmpA, Center + 1, Right);
        Merge(A, TmpA, Left, Center + 1, Right);
    }
}

void MergeSort(ElementType A[], int N) {
    ElementType * TmpA = (ElementType *)malloc(N * sizeof(ElementType));
    if (TmpA != NULL) {
        MSort(A, TmpA, 0, N - 1);
        free(TmpA);
    }
    else {
        cout << "Malloc Failed!" << endl;
    }
}

void Test() {
    int A[] = {20, 10, 40, 30, 50, 70, 80, 60, 90};
    int ASize = sizeof (A) / sizeof (A[0]);
    MergeSort(A, ASize);
    DisSolution(A, ASize);
}

int main(void) {
    Test();

    return 0;
}