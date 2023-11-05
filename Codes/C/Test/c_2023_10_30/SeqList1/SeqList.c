#include "SeqList.h"

//初始化
void SLInit(SL* pl) {
	pl->a = NULL;
	pl->size = 0;
	pl->capacity = 0;
}
//分配空间
void SLCheckCapacity(SL* pl) {
	if (pl->size == pl->capacity) {
		int newcapacity = pl->capacity == 0 ? 4 : pl->capacity * 2;
		SLDataType* tmp = (SLDataType*)realloc(pl->a, sizeof(SLDataType) * newcapacity);
		
		assert(tmp);
		pl->a = tmp;
		pl->capacity = newcapacity;
	}
}
//插入：在pos位置插入x
void SLInsert(SL* pl, int pos, SLDataType x) {
	assert(pl && pos >= 0 && pos <= pl->size);
	SLCheckCapacity(pl);

	//插入要把pos之后的所有元素后移一位
	int i = pl->size;
	while (i > pos) {
		pl->a[i] = pl->a[i - 1];
		i--;
	}
	pl->a[pos] = x;
	pl->size++;
}

//删除：删除位于pos位置的元素
void SLErase(SL* pl, int pos) {
	assert(pl && pos >= 0 && pos < pl->size);
	//根据把pos后的元素全部往前移动
	int i = pos;
	while (i < pl->size - 1) {
		pl->a[i] = pl->a[i + 1];
		i++;
	}
	pl->size--;
}

//头插
void SLPushFront(SL* pl, SLDataType x) {
	assert(pl);
	SLInsert(pl, 0, x);
}

//尾插
void SLPushBack(SL* pl, SLDataType x) {
	assert(pl);
	SLInsert(pl, pl->size, x);
}

//头删
void SLPopFront(SL* pl) {
	assert(pl);
	SLErase(pl, 0);
}
//尾删
void SLPopBack(SL* pl) {
	assert(pl);
	SLErase(pl, pl->size - 1);
}
//打印
void SLPrint(const SL* pl) {
	assert(pl);
	int i = 0;
	while (i < pl->size) {
		printf("%d ", pl->a[i++]);
	}
	printf("\n");
}
//查找
int SLFind(const SL* pl, SLDataType x) {
	assert(pl);
	int i = 0;
	while (i < pl->size) {
		if (pl->a[i] == x) {
			return i;
		}
		i++;
	}
	if (i == pl->size) {
		return -1;
	}
}
//修改
void SLModify(SL* pl, int pos, SLDataType x) {
	assert(pl);
	pl->a[pos] = x;
}