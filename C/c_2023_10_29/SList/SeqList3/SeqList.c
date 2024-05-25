#include "SeqList.h"

void SLInit(SL* ps) {
	ps->a = NULL;
	ps->capacity = 0;
	ps->size = 0;
}

void SLCheckCapacity(SL* ps) {
	//当存满或者没有值的时候，分配空间
	if (ps->size == ps->capacity) {
		int newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		SLDataType * tmp = (SLDataType*)realloc(ps->a, sizeof(SLDataType) * newcapacity);

		if (tmp == NULL) {
			printf("Realloc Failed\n");
			exit(-1);
		}
		ps->capacity = newcapacity;
		ps->a = tmp;
	}
}

void SLInsert(SL* ps, int pos, SLDataType x) {
	//ps为空指针，要插入的元素下标不符合要求，则强制退出
	assert(ps && pos >= 0 && pos <= ps->size);
	SLCheckCapacity(ps);
	
	//这里注意一下
	int end = ps->size;
	while (end >= pos) {
		ps->a[end] = ps->a[end - 1];
		end--;
	}
	ps->a[pos] = x;
	ps->size++;
}

void SLErase(SL* ps, int pos) {
	assert(ps && pos >= 0 && pos < ps->size);
	int i = pos;
	//把所有的元素向前拿
	while (i < ps->size - 1) {
		ps->a[i] = ps->a[i + 1];
		i++;
	}
	ps->size--;
}

void SLPushBack(SL* ps, SLDataType x) {
	assert(ps);
	SLInsert(ps, ps->size, x);
}

void SLPushFront(SL* ps, SLDataType* x) {
	assert(ps);
	SLInsert(ps, 0, x);
}

void SLPrint(SL* ps) {
	assert(ps);
	int i;
	for (i = 0; i < ps->size; i++) {
		printf("%d ", ps->a[i]);
	}
}

//头删
void SLPopFront(SL* ps) {
	assert(ps);
	SLErase(ps, 0);
}

//尾删
void SLPopBack(SL* ps) {
	assert(ps);
	SLErase(ps, ps->size - 1);
}

//查找
int SLFind(SL* ps, SLDataType x) {
	assert(ps);
	int i = 0;
	while (i < ps->size) {
		if (ps->a[i] == x) {
			return i;
		}
		i++;
	}
	if (i == ps->size) {
		return -1;
	}
}

//修改
void SLModify(SL* ps, int pos, SLDataType x) {
	assert(ps);
	ps->a[pos] = x;
}