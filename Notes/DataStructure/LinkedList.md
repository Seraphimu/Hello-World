```c
#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

// 创建一个空链表
Node* createEmptyList() {
    return NULL;
}

// 向链表尾部添加一个节点
void append(Node** head, int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;

    if (*head == NULL) {
        *head = newNode;
    } else {
        Node* current = *head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newNode;
    }
}

// 向链表头部添加一个节点
void prepend(Node** head, int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = *head;
    *head = newNode;
}

// 查找链表中的节点，如果找到则返回节点指针，否则返回NULL
Node* findNode(Node* head, int data) {
    Node* current = head;
    while (current != NULL) {
        if (current->data == data) {
            return current;
        }
        current = current->next;
    }
    return NULL;
}

// 删除链表中的节点，如果找到则返回true，否则返回false
int deleteNode(Node** head, int data) {
    if (*head == NULL) {
        return 0;
    }

    Node* current = *head;
    if (current->data == data) {
        *head = current->next;
        free(current);
        return 1;
    }

    Node* previous = NULL;
    while (current != NULL) {
        if (current->data == data) {
            previous->next = current->next;
            free(current);
            return 1;
        }
        previous = current;
        current = current->next;
    }

    return 0;
}

// 打印链表中的所有节点
void printList(Node* head) {
    Node* current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

int main() {
    Node* head = createEmptyList();

    // 向链表中添加节点
    append(&head, 1);
    append(&head, 2);
    append(&head, 3);

    // 打印链表
    printList(head);  // 输出: 1 2 3

    // 向链表头部添加节点
    prepend(&head, 0);

    // 打印链表
    printList(head);  // 输出: 0 1 2 3

    // 查找链表中的节点
    Node* foundNode = findNode(head, 2);
    if (foundNode != NULL) {
        printf("找到了节点，数据为: %d\n", foundNode->data);  // 输出: 找到了节点，数据为: 2
    } else {
        printf("未找到节点\n");
    }

    // 删除链表中的节点
    if (deleteNode(&head, 2)) {
        printf("删除节点成功\n");
    } else {
        printf("删除节点失败\n");
    }

    // 打印链表
    printList(head);  // 输出: 0 1 3

    return 0;
}
```