#include "SeqList.h"

//初始化
void SLInit(SL* ps) {
	ps->a = NULL;
	ps->capacity = 0;
	ps->size = 0;
}
//销毁
void SLDestory(SL* ps) {
	assert(ps);
	SLInit(ps);
}
//打印
void SLPrint(const SL * sl) {
	int i;
	for (i = 0; i < sl->size; i++) {
		printf("%d ", sl->a[i]);
	}
	printf("\n");
}
//分配内存
void SLCheckCapacity(SL* ps) {
	//如果表为空或者没有空间
	if (ps->capacity == ps->size) {
		int newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		SLDataType* tmp = (SLDataType*)realloc(ps->a, sizeof(SLDataType) * newcapacity);

		if (tmp == NULL) {
			printf("Realloc failed\n");
			exit(-1);
		}
		ps->a = tmp;
		ps->capacity = newcapacity;
	}
}

//尾插
void SLPushBack(SL* ps, SLDataType x) {
	assert(ps);
	//可以重复利用SLInsert()函数的内容
	//SLCheckCapacity(ps);
	//ps->a[ps->size] = x;
	//ps->size++;
	SLInsert(ps, ps->size, x);
}
//尾删
void SLPopBack(SL* ps) {
	assert(ps && ps->size > 0);
	//ps->size--;
	SLErase(ps, ps->size - 1);
}
//头插
void SLPushFront(SL* ps, SLDataType x) {
	assert(ps);
	//重用SLInsert()函数
	SLInsert(ps, 0, x);
	//SLCheckCapacity(ps);
	//
	////把所有元素向后挪动一位
	//int end = ps->size;
	//while (end) {
	//	ps->a[end] = ps->a[end - 1];
	//	end--;
	//}
	//ps->a[0] = x;
	//ps->size++;
}
//头删
void SLPopFront(SL* ps) {
	assert(ps);
	SLErase(ps, 0);
	//重用SLErase()函数
	//int i = 0;

	////把所有的元素向前挪一位
	//while (i < ps->size - 1) {
	//	ps->a[i] = ps->a[i + 1];
	//	i++;
	//}
	//ps->size--;
}

// 返回下标，没有找打返回-1
int SLFind(SL* ps, SLDataType x) {
	assert(ps);
	int i;
	//找到了
	for (i = 0; i < ps->size; i++) {
		if (x == ps->a[i]) {
			return i;
		}
	}
	//没找到
	if (i == ps->size) {
		return -1;
	}
}

// 在pos位置插入x
void SLInsert(SL* ps, int pos, SLDataType x) {
	//表为空，或者下标不符合要求，强制退出
	assert(ps && pos <= ps->size && pos >= 0);
	//好家伙，查了好几次，不知道怎么搞得，原来是分配内存给忘了
	SLCheckCapacity(ps);
	//把所有元素向后挪动
	int end = ps->size;
	while (end > pos) {
		ps->a[end] = ps->a[end - 1];
		end--;		//这个地方循环控制不要忘了，因为for循环用的多，所以写while循环经常忘记这个条件
	}
	//把值插入，长度+1
	ps->a[pos] = x;
	ps->size++;
}

// 删除pos位置的值
void SLErase(SL* ps, int pos) {
	assert(ps && pos >= 0 && pos < ps->size);

	//把所有的元素向前挪一位
	//int i = 0; ERR，应当是从pos开始
	int i = pos;
	while (i < ps->size - 1) {
		ps->a[i] = ps->a[i + 1];
		i++;
	}
	ps->size--;
}

//改变pos处的值
void SLModify(SL* ps, int pos, SLDataType x) {
	assert(ps && pos >= 0 && pos < ps->size);
	ps->a[pos] = x;
}