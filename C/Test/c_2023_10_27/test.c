//二分查找
#include <stdio.h>

typedef int DataType;

int main(void) {
    DataType arr[] = {-2, -1, 0, 1, 2, 3};
    int l = 0;
    int r = sizeof (arr) / sizeof(DataType) - 1;
    int m, n;
    
    scanf("%d", &n);
    while (l <= r) {
        m = (l + r) / 2;
        if (arr[m] == n) {
            printf("找到了，是%d, 下标是%d\n", arr[m], m);
            break;
        }
        else if (n > arr[m]) {
            l = m + 1;
        }
        else {
            r = m - 1;
        }
    }
    if (l > r) {
        printf("找不到\n");
    }

    return 0;
}


// #include <stdio.h>

// int main(void) {
//     char ch = 'A';

//     for (int i = 0; i < 6; i++) {
//         for (int j = 0; j <= i; j++) {
//             printf("%c", ch++);
//         }
//         printf("\n");
//     }
    
//     return 0;
// }








// #include <stdio.h>

// int main(void) {
//     for (int i = 0; i < 6; i++) {
//         char ch = 'F';
//         for (int j = 0; j <= i; j++) {
//             printf("%c", ch - j);
//         }
//         printf("\n");
//     }

//     return 0;
// }









// #include <stdio.h>

// int main(void)
// {
//     char ch = '$';

//     for (int i = 1; i <= 5; i++) {
//         for (int j = 1; j <= i; j++) {
//             printf("%c", ch);
//         }
//         putchar('\n');
//     }
    
//     return 0;
// }











// //输入一段文字，以#结尾，然后判断空格、换行和其他字符的个数

// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
//     int space = 0, row = 0, others = 0;
//     char ch;
//     while ((ch = getchar()) != '#') {
//         if (ch == ' ') {
//             space++;
//         }
//         else if (ch == '\n') {
//             row++;
//         }
//         else {
//             others++;
//         }
//     }

//     printf("space: %d, row: %d, others: %d\n", space, row, others);
    
//     return 0;
// }











// #include <stdio.h>

// int main(void)
// {
//     char ch[40];
//     scanf("%s", ch);

//     switch (ch[0]) {
//         case 'S':
//             switch (ch[1]) {
//                 case 'a':
//                     printf("周六\n");
//                     break;
//                 case 'u':
//                     printf("周日\n");
//                     break;
//             }
//             break;      //外层的switch语句不要忘记用break;
//         case 'T':
//             switch (ch[1]) {
//                 case 'u':
//                     printf("周二\n");
//                     break;
//                 case 'h':
//                     printf("周四\n");
//                     break;
//             }
//             break;
//         case 'W':
//             printf("周三\n");
//             break;
//         case 'M':
//             printf("周一\n");
//             break;
//         case 'F':
//             printf("周五\n");
//             break;
//         default:
//             printf("Error\n");
//             break;
//     }
    
//     return 0;
// }








// //把一个数字的每一位逆序输出
// #include <stdio.h>
// void f(int n);
// void g(int n);
// int main(void)
// {
//     int n;
//     scanf("%d", &n);
//     f(n);
//     printf("\n");
//     g(n);

//     return 0;
// }

// //递归
// void f(int n)
// {
//     printf("%d ", n % 10);
//     if (n >= 10)
//         f(n / 10);
// }

// //循环
// void g(int n)
// {
//    int i;
//    for (i = 1; i <= n; i *= 10)
//         printf("%d ", n / i % 10);
// }












// #include <stdio.h>
// int max(int x, int y, int z);
// int min(int x, int y, int z);
// int main(void)
// {
//     int x, y, z;
//     scanf("%d%d%d", &x, &y, &z);

//     printf("Max is %d\n", max(x, y, z));
//     printf("Min is %d\n", min(x, y, z));
    
//     return 0;
// }

// int max(int x, int y, int z)
// {
//     x = x < y ? y : x;      //将较大值赋给x
//     x = x < z ? z : x;      //作用同上句
    
//     return x;
// }
// int min(int x, int y, int z)
// {
//     x = x > y ? y : x;
//     x = x > z ? z : x;

//     return x;
// }










// //计算1 - 2 + 3 - 4 ... n
// #include <stdio.h>
// int f(int n);
// int main(void)
// {
//     int n;
//     if (scanf("%d", &n) != EOF && n >= 1) {
//         printf("%d\n", f(n));
//     }

//     return 0;

// }
// int f(int n)
// {
//     int s = 0;
//     int i = 0;

//     for (i = 0; i <= n; ++i) {
//         if (i % 2) {
//             s += i;
//         }
//         else {
//             s -= i;
//         }
//     }
    
//     return s;
// }











// //计算从1加到n
// #include <stdio.h>
// #include <stdlib.h>
// int f1(int n);
// int f2(int n);
// int main(void)
// {
//     int n;
//     //判断输入的内容是否符合要求
//     if (scanf("%d", &n) != EOF && n >= 1) {
//         printf("result is %d\n", f1(n));
//         printf("result is %d\n", f2(n));
//     }
//     else {
//         printf("failed\n");
//         exit(-1);
//     }

//     return 0;
// }

// //递归方法
// int f1(int n)
// {
//     if (n == 1) {
//         return 1;
//     }
//     if (n > 1) {
//         return f1(n - 1) + n;
//     }
// }

// //循环方法
// int f2(int n)
// {
//     int s = 0;
//     int i = 0;

//     for (i = 1; i <= n; ++i) {
//         s += i;
//     }
    
//     return s;
// }


















// #include <stdio.h>
// #include <stdlib.h>
// #define MONTHS 12
// #define YEARS 5

// int main(void) {
//     const float rain[YEARS][MONTHS] =
//     {
//         {4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},
//         {8.5,8.2,1.2,1.6,2.4,0.0,5.2,0.9,0.3,0.9,1.4,7.3},
//         {9.1,8.5,6.7,4.3,2.1,0.8,0.2,0.2,1.1,2.3,6.1,8.4},
//         {7.2,9.9,8.4,3.3,1.2,0.8,0.4,0.0,0.6,1.7,4.3,6.2},
//         {7.6,5.6,3.8,2.8,3.8,0.2,0.0,0.0,0.0,1.3,2.6,5.2}
//     };

//     int year, month;
//     float subtot, total;

//     for (year = 0, total = 0; year < YEARS; year++) {
//         for (month = 0, subtot = 0; month < MONTHS; month++) {
//             subtot += *(*(rain + month) + year);
//         }
//         total += subtot;
//     }

//     printf("\nThe yearly average is %.1f inches.\n\n",
//            total/YEARS);
//     printf("MONTHLY AVERAGES:\n\n");
//     printf(" Jan  Feb  Mar  Apr  May  Jun  Jul  Aug  Sep  Oct ");
//     printf(" Nov  Dec\n");

//     for (month = 0; month < MONTHS; month++) {
//         for (year = 0, subtot = 0; year < YEARS; year++) {
//             subtot += *(*(rain + year) + month);
//         }
//         printf("%4.1f ", subtot/YEARS);
//     }
//     printf("\n");

//     return 0;
// }














// //合并两个链表，删除重复的元素
// #include <stdio.h>
// #include <stdlib.h>

// typedef int DataType;
// typedef struct SListNode {
// 	DataType data;
// 	struct SListNode* next;
// }SListNode;

// //初始化
// void SListInit(SListNode** pphead) {
// 	*pphead = NULL;
// }


// //对乱序的链表排序
// void BubbleSort(SListNode** pphead) {
// 	if (*pphead == NULL) {
// 		return;
// 	}
// 	DataType tmp;
// 	//控制循环的变量
// 	SListNode* current = *pphead;
// 	SListNode* next = NULL;

// 	while (current != NULL) {
// 		next = current->next;
// 		while (next != NULL) {
// 			if (current->data > next->data) {
// 				tmp = current->data;
// 				current->data = next->data;
// 				next->data = tmp;
// 			}
// 			next = next->next;
// 		}
// 		current = current->next;
// 	}

// }

// //打印链表
// void SListPrint(SListNode* phead) {
// 	SListNode* cur = phead;
// 	while (cur != NULL) {
// 		printf("%d ", cur->data);
// 		cur = cur->next;
// 	}
// }

// //分配空间
// SListNode* SListNodeBuy(DataType x) {
// 	SListNode* newNode = (SListNode*)malloc(sizeof(SListNode));
// 	//检查结点是否正常分配
// 	if (newNode == NULL) {
// 		printf("Malloc Failed\n");
// 		exit(-1);
// 	}
// 	newNode->data = x;
// 	newNode->next = NULL;

// 	return newNode;

// }

// //尾插：
// void SListPushBack(SListNode** pphead, DataType x) {
// 	//先分配空间，如果没有结点就把头指针指向它，如果有就接在当前链表之后
// 	SListNode* newnode = SListNodeBuy(x);
// 	if (*pphead == NULL) {
// 		*pphead = newnode;
// 	}

// 	else {
// 		//找尾结点
// 		SListNode* tail = *pphead;
// 		//while (tail->next != NULL)
// 		while (tail->next) {
// 			tail = tail->next;
// 		}
// 		tail->next = newnode;
// 	}

// }

// //头插：
// void SListPushFront(SListNode** pphead, DataType x) {
// 	SListNode* newnode = SListNodeBuy(x);
// 	newnode->next = *pphead;		//把新结点的下一位指向原来的头结点
// 	*pphead = newnode;				//把头结点再指向新结点
// }

// //合并链表
// SListNode* SListCombine(SListNode** pplist1, SListNode** pplist2) {
// 	SListNode* p1 = *pplist1;
// 	SListNode* p2 = *pplist2;
// 	SListNode* p3 = NULL;

// 	//遍历
// 	while (p1 != NULL) {
// 		SListPushBack(&p3, p1->data);
// 		p1 = p1->next;
// 	}
	
// 	while (p2 != NULL) {
// 		SListPushBack(&p3, p2->data);
// 		p2 = p2->next;
// 	}
	
// 	return p3;

// }

// SListNode* SListRemove(SListNode ** pphead) {
// 	SListNode* current = *pphead;

//     while (current != NULL) {
//         SListNode * temp = current;
//         while (temp->next != NULL) {
//             if (temp->next->data == current->data) {
//                 SListNode * nodeDel = temp->next;
//                 temp->next = temp->next->next;
//                 free(nodeDel);
//             }
//             else {
//                 temp = temp->next;
//             }
//         }
    
//         current = current->next;
//     }

// }

// void SListPopBack(SListNode ** pphead) {
//     if (*pphead == NULL) {
//         return;
//     }
//     else if ((*pphead)->next == NULL) {
//         free(*pphead);
//         *pphead = NULL;
//     }
//     else {
//         SListNode * tail = *pphead;

//         while (tail->next->next) {
//             tail = tail->next;
//         }
//         free(tail->next->next);
//         tail->next = NULL;
//     }

// }

// //测试合并
// void Test4(void) {
// 	//被合并的链表
// 	SListNode* plist1 = NULL;
// 	SListNode* plist2 = NULL;
// 	//合并到的目标链表
// 	SListNode* plist3 = NULL;

// 	//初始化
// 	SListInit(&plist1);
// 	SListInit(&plist2);
// 	SListInit(&plist3);
	
// 	//插入数据到plist1
// 	SListPushBack(&plist1, 1);
// 	SListPushBack(&plist1, 1);
// 	SListPushBack(&plist1, 4);
// 	SListPushBack(&plist1, 5);
// 	SListPushBack(&plist1, 1);
// 	SListPushBack(&plist1, 4);
	
// 	//插入数据到plist2
// 	SListPushBack(&plist2, 1);
// 	SListPushBack(&plist2, 9);
// 	SListPushBack(&plist2, 1);
// 	SListPushBack(&plist2, 9);
// 	SListPushBack(&plist2, 8);
// 	SListPushBack(&plist2, 1);
// 	SListPushBack(&plist2, 0);



// 	plist3 = SListCombine(&plist1, &plist2);
// 	printf("删除前: \n");
// 	SListPrint(plist3);
// 	SListRemove(&plist3);
	
// 	//SListPrint(plist1);
// 	//SListPrint(plist2);
// 	printf("删除后: \n");
// 	SListPrint(plist3);
	
// 	//把表1和2删除
// 	SListPopBack(&plist1);
// 	SListPopBack(&plist1);
// 	SListPopBack(&plist1);
// 	SListPopBack(&plist1);
// 	SListPopBack(&plist1);
// 	SListPopBack(&plist1);
	
// 	SListPopBack(&plist2);
// 	SListPopBack(&plist2);
// 	SListPopBack(&plist2);
// 	SListPopBack(&plist2);
// 	SListPopBack(&plist2);
// 	SListPopBack(&plist2);
// 	SListPopBack(&plist2);

// }



// int main(void) {
// 	Test4();

// 	return 0;

// }































// #include <stdio.h>
// // void display2(int pa[][3][4])        //等价下行的写法
// void display2(int (*pa)[3][4])
// {
//     for (int i = 0; i < 2; i++) {
//         for (int j = 0; j < 3; j++) {
//             for (int k = 0; k < 4; k++) {
//                 // printf("%4d ", pa[i][j][k]);
//                 printf("%4d ", *(*(*(pa + i) + j) + k));
//             }
//             printf("\n");
//         }
//         printf("\n");
//     }
// }

// int main(void)
// {
//     int arr[2][3][4] = {                //长为2， 宽为3， 高为4的三维数组
//             {
//                 {1, 2, 3, 4}, 
//                 {5, 6, 7, 8}, 
//                 {9, 10, 11, 12}
//             }, 
//             {
//                 {13, 14, 15, 16}, 
//                 {17, 18, 19, 20}, 
//                 {21, 22, 23, 24}
//             }
//         };
    
//     int (*pa)[3][4] = arr;              //声明一个N维数组的指针时，只能省去最左侧的参数。
//     display2(pa);
    
//     return 0;
// }



















// // // void display1(int p[][3])            //等价下行写法
// // void display1(int (*p)[3])
// // {
// //     for (int i = 0; i < 2; i++) {
// //         for (int j = 0; j < 3; j++) {
// //             printf("%d ", *(*(p + i) + j));
// //             // printf("%d ", p[i][j]);
// //         }
// //         printf("\n");
// //     }
// // }

// // #include <stdio.h>
// // int main(void)
// // {
// //     int zippo[2][3] = {{1, 1, 4}, {5, 1, 4}};
// //     int (*pz)[3] = zippo;            //int (*pz)[3]是一个指向含有3个int元素的一维数组的指针。
// //     display1(pz);
// //     printf("pz = %p\n", pz);
// //     printf("pz + 1 = %p\n", pz + 1);    //和pz相差12个字节，即3个int的大小。
    
// //     return 0;
// // }















// #include <stdio.h>

// // void display1(int p[][3])            //等价下行写法
// void display1(int (*p)[3])
// {
//     for (int i = 0; i < 2; i++) {
//         for (int j = 0; j < 3; j++) {
//             printf("%d ", *(*(p + i) + j));
//             // printf("%d ", p[i][j]);
//         }
//         printf("\n");
//     }
// }

// // void display2(int pa[][3][4])        //等价下行的写法
// void display2(int (*pa)[3][4])
// {
//     for (int i = 0; i < 2; i++) {
//         for (int j = 0; j < 3; j++) {
//             for (int k = 0; k < 4; k++) {
//                 // printf("%4d ", pa[i][j][k]);
//                 printf("%4d ", *(*(*(pa + i) + j) + k));
//             }
//             printf("\n");
//         }
//         printf("\n");
//     }
// }


// int main(void)
// {
    

//     int zippo[2][3] = {{1, 1, 4}, {5, 1, 4}};
//     int (*pz)[3] = zippo;            //int (*pz)[3]是一个指向含有3个int元素的一维数组的指针。
//     display1(pz);
//     printf("pz = %p\n", pz);
//     printf("pz + 1 = %p\n", pz + 1);    //和pz相差12个字节，即3个int的大小。


//     int arr[2][3][4] = {                //长为2， 宽为3， 高为4的三维数组
//             {
//                 {1, 2, 3, 4}, 
//                 {5, 6, 7, 8}, 
//                 {9, 10, 11, 12}
//             }, 
//             {
//                 {13, 14, 15, 16}, 
//                 {17, 18, 19, 20}, 
//                 {21, 22, 23, 24}
//             }
//         };
    
//     int (*pa)[3][4] = arr;              //声明一个N维数组的指针时，只能省去最左侧的参数。
//     display2(pa);
    
//     return 0;

// }









// // #include <stdio.h>
// // int a;
// // double b;
// // char c;
// // int arr[100];

// // int main(void)
// // {
// //     printf("%d\n", a);
// //     printf("%lf\n", b);
// //     printf("%c\n", c);
// //     for (int i = 0; i < 100; i++) {
// //         printf("%d ", arr[i]);
// //     }

// //     return 0;

// // }