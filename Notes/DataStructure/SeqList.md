一、顺序表：  
1. 定义结构体：  
```c  
typedef struct {  
    ElemType data[MAXSIZE];  
    int length;  
} SqList;  
```

2. 创建顺序表：  
```c  
Status CreateSqList(SqList *L) {  
    L->length = 0;  
    return OK;  
}
```

3. 判断顺序表是否为空：  
```c  
Status IsSqListEmpty(SqList L) {  
    return L.length == 0;  
}
```

4. 插入元素：  
```c  
Status InsertElem(SqList *L, int i, ElemType e) {  
    if (i < 1 || i > L->length) {  
        return ERROR;  
    }  
    for (int j = L->length; j > i; j--) {  
        L->data[j] = L->data[j - 1];  
    }  
    L->data[i - 1] = e;  
    L->length++;  
    return OK;  
}
```

5. 删除元素：  
```c  
Status DeleteElem(SqList *L, int i, ElemType *e) {  
    if (i < 1 || i > L->length) {  
        return ERROR;  
    }  
    *e = L->data[i - 1];  
    for (int j = i - 1; j < L->length - 1; j++) {  
        L->data[j] = L->data[j + 1];  
    }  
    L->length--;  
    return OK;  
}
```

6. 查找元素：  
```c  
int FindElem(SqList L, ElemType e) {  
    for (int i = 0; i < L.length; i++) {  
        if (L.data[i] == e) {  
            return i + 1;  
        }  
    }  
    return 0;  
}
```

7. 修改元素：  
```c  
Status ModifyElem(SqList *L, int i, ElemType e) {  
    if (i < 1 || i > L->length) {  
        return ERROR;  
    }  
    L->data[i - 1] = e;  
    return OK;  
}
```

8. 遍历顺序表：  
```c  
void TraverseSqList(SqList L) {  
    for (int i = 0; i < L.length; i++) {  
        printf("%d ", L.data[i]);  
    }  
    printf("\n");  
}
```

9. 释放顺序表空间：  
```c  
Status FreeSqList(SqList *L) {  
    if (L == NULL) {  
        return ERROR;  
    }  
    L->length = 0;  
    return OK;  
}
```