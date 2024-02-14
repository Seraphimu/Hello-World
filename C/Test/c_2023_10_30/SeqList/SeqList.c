#include "SeqList.h"
//初始化
void SLInit(SL* pl) {
	pl->a = NULL;
	pl->size = 0;
	pl->capacity = 0;
}
void SLCheckCapacity(SL* pl) {
	assert(pl);
	//空间用满了，或者没有分配过内存
	if (pl->size == pl->capacity) {
		int newcapacity = pl->capacity == 0 ? 4 : pl->capacity * 2;
		SLDataType* tmp = (SLDataType*)realloc(pl->a, sizeof(SLDataType) * newcapacity);
		
		if (tmp == NULL) {
			printf("Realloc Failed\n");
			exit(-1);
		}
		pl->capacity = newcapacity;
		pl->a = tmp;
	}
	//有空间
	else {
		return;
	}
}
//插入
void SLInsert(SL* pl, int pos, SLDataType x) {
	//断言，若是下标不合法，或者指针pl为空指针时报错
	assert(pl && pos >= 0 && pos <= pl->size);
	SLCheckCapacity(pl);
	//插入，要把元素从pos位开始向后移动一位
	int i = pl->size;
	while (i > pos) {
		pl->a[i] = pl->a[i - 1];
		i--;
	}
	pl->a[pos] = x;
	pl->size++;
}
//删除
void SLErase(SL* pl, int pos) {
	//断言，若是下标不合法，或者指针pl为空指针时报错
	assert(pl && pos >= 0 && pos < pl->size);
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
//打印
void SLPrint(const SL* pl) {
	assert(pl);
	int i = 0;
	while (i < pl->size) {
		printf("%d ", pl->a[i]);
		i++;
	}
	printf("\n");
}

void SLPopFront(SL* pl) {
	assert(pl);
	SLErase(pl, 0);
}

void SLPopBack(SL* pl) {
	assert(pl);
	SLErase(pl, pl->size - 1);
}

void SLModify(SL* pl, int pos, SLDataType x) {
	assert(pl && pos >= 0 && pos < pl->size);
	pl->a[pos] = x;
}

//查找，找得到有奖励，找不到有惩罚
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