#include "SeqList.h"

void SLInit(SL* ps) {
	ps->a = NULL;
	ps->size = 0;
	ps->capacity = 0;
}

void SLPrint(SL ls) {
	int i = 0;
	while (i < ls.size) {
		printf("%d ", *ls.a);
		i++;
	}
	printf("\n");
}

void SLInsert(SL* ps, int pos, SLDataType x) {
    int i = pos;
}
void SLErase(SL* ps, int pos) {

}