#include <iostream>
#define MAX 100
using namespace std;

typedef struct node {
	int data[MAX];
	int length;
}sqlist;

void CreateList(sqlist& L, int arr[], int num);
void DisplayList(sqlist L);

int main()
{
	int arr[MAX] = { 0 };
	int num = 0;
	cout << "Enter an argument for the list length: ";
	cin >> num;
	cout << "Enter arguments for the list: ";

	for (int i = 0; i < num; i++)
		cin >> arr[i];

	sqlist L;

	CreateList(L, arr, num);
	DisplayList(L);

	return 0;
}

void CreateList(sqlist& L, int arr[], int num)
{
	int i = 0;
	for (i = 0; i < num; i++)
		L.data[i] = arr[i];
	L.length = i;
}

void DisplayList(sqlist L)
{
	for (int i = 0; i < L.length; i++)
		cout << "arr[" << i << "] = " << L.data[i] << endl;
}