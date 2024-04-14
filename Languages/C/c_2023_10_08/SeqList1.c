//顺序表：（静态）
//建立顺序表,完成顺序表的基本操作：初始化、插入、删除、置空表、求表长、查找元素、判线性表是否为空。
#include <stdio.h>
//状态信息
#define MAXSIZE 100
#define OK 1
#define ERROR 0

typedef int SLDataType;
typedef int Status;

typedef struct SeqList {
	int data[MAXSIZE];
	int length;
}SL;

//初始化
Status SeqListInit(SL* L);
//创建顺序表，在main()函数中创建一个SLDataType类型的数组把它复制到SL中
Status CreateList(SL * L, SLDataType arr[], int n);
//插入：在第index个位置上插入值value，即在下标index - 1上操作
Status SeqListPush(SL* L, int index, SLDataType value);
//删除：删除第index个元素，即操作index - 1下标的元素，用value返回删除的值
Status SeqListDel(SL* L, int index, SLDataType * value);
//置空表
Status SeqListClear(SL* L);
//求表长
int SeqListLength(SL L);
//查找元素
int SeqListLocal(SL L, SLDataType target);
//判线性表是否为空
Status SeqListEmpty(SL L);

//测试函数，用于测试顺序表的操作
void Test();
int main(void)
{
	Test();

	return 0;
}

void Test() {
	SLDataType arr[MAXSIZE], * value;
	SL L;
	int n, i;

	SeqListInit(&L);
	scanf("%d", &n);
	for (i = 0; i < n; ++i) {
		scanf("%d", &arr[i]);
	}
	CreateList(&L, arr, n);
	//SeqListPush(&L, 3, 1919810);
	//SeqListDel(&L, 2, &value);

	//打印表
	for (i = 0; i < L.length; ++i) {
		printf("%d ", L.data[i]);
	}
	printf("\n");
	printf("%d\n", SeqListLength(L));
	printf("%d\n", SeqListLocal(L, 114));
}

Status SeqListInit(SL* L)
{
	//长度置为0
	L->length = 0;
	//检查是否成功初始化
	if (L->length == 0) {
		return OK;
	}
	else {
		return ERROR;
	}
}

Status CreateList(SL* L, SLDataType arr[], int n)
{
	//输入错误时返回ERROR
	if (n < 0 || n > MAXSIZE) {
		return ERROR;
	}
	else {
		int i;

		for (i = 0; i < n; ++i) {
			L->data[i] = arr[i];
		}

		//获取长度
		L->length = i;
	}
}

Status SeqListPush(SL* L, int index, SLDataType value)
{
	//判断线性表是否符合要求
	if (index > L->length || index < 1 || L->length == 0) {
		return ERROR;
	}
	else {
		int i;

		//把所有元素后移一位，并增加一位长度
		for (i = L->length; i > index - 1; --i) {
			L->data[i] = L->data[i - 1];
		}
		L->data[index - 1] = value;
		L->length++;
		return OK;
	}
}

Status SeqListDel(SL* L, int index, SLDataType * value)
{
	//判断线性表是否符合要求
	if (index > L->length || index < 1 || L->length == 0) {
		return ERROR;
	}
	else {
		int i;

		//把值给*value，然后把index - 1下标之后的元素全部前移一位，并减少一位长度
		*value = L->data[index - 1];
		for (i = index - 1; i < L->length; ++i) {
			L->data[i] = L->data[i + 1];
		}

		L->length--;
		return OK;
	}
}

Status SeqListClear(SL* L)
{
	if (L->length == 0) {
		return ERROR;
	}
	else {
		L->length = 0;	//长度置空
		return OK;
	}
}

int SeqListLength(SL L)
{
	return L.length;
}

int SeqListLocal(SL L, SLDataType target)
{
	if (L.length == 0) {
		return 0;
	}
	else {
		//从头开始遍历，一直到最后，发现了返回在哪个位置上，未发现返回-1，因为 "下标 == 位数 - 1"，所以要返回 i + 1
		int i;
		for (i = 0; i < L.length; ++i) {
			if (L.data[i] == target) {
				return i + 1;
			}
		}
		//i == L.length时顺序表遍历完成没有发现这个值
		if (i == L.length) {
			return -1;
		}
	}
}

Status SeqListEmpty(SL L)
{
	if (L.length == 0) {
		return OK;
	}
	else {
		return ERROR;
	}
}