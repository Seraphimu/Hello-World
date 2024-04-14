#include <stdio.h>
int BinarySearch(int * arr,int size, int n);
void Test(void) {
	int arr[] = { -5, -4, -1, 0, 1, 2, 10, 1145 };
	int size = sizeof(arr) / sizeof(int) - 1;
	printf("%d\n", BinarySearch(arr, size, 114));
}
int main(void) {
	Test();
	return 0;
}

//二分查找：找到了返回下标，找不到返回-1
int BinarySearch(int * arr,int size, int n) {
	int l = 0;
	int r = size;
	int m = 0;

	while (l <= r) {
		m = (l + r) / 2;
		if (n == arr[m]) {
			return m;
		}
		else if (n > arr[m]) {
			l = m + 1;
		}
		else {
			r = m - 1;
		}
	}
	if (l > r) {
		return -1;
	}
}