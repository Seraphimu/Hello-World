#include <stdio.h>  
#include <stdlib.h>

typedef struct Node {  
    int data;  
    struct Node* next;  
} Node;

// 创建一个新节点  
Node* createNode(int data) {  
    Node* newNode = (Node*)malloc(sizeof(Node));  
    newNode->data = data;  
    newNode->next = NULL;  
    return newNode;  
}

// 在链表尾部插入一个节点  
void insertNode(Node** head, int data) {  
    Node* newNode = createNode(data);  
    if (*head == NULL) {  
        *head = newNode;  
    } else {  
        Node* temp = *head;  
        while (temp->next != NULL) {  
            temp = temp->next;  
        }  
        temp->next = newNode;  
    }  
}

// 删除链表中相同的元素  
void deleteDuplicates(Node** head) {  
    Node* current = *head;  
    while (current != NULL) {  
        Node* temp = current;  
        while (temp->next != NULL) {  
            if (temp->next->data == current->data) {  
                Node* nodeToDelete = temp->next;  
                temp->next = temp->next->next;  
                free(nodeToDelete);  
            } else {  
                temp = temp->next;  
            }  
        }  
        current = current->next;  
    }  
}

// 打印链表  
void printList(Node* head) {  
    Node* temp = head;  
    while (temp != NULL) {  
        printf("%d -> ", temp->data);  
        temp = temp->next;  
    }  
    printf("NULL\n");  
}

int main() {  
    Node* head = NULL;  
    insertNode(&head, 1);  
    insertNode(&head, 2);  
    insertNode(&head, 3);  
    insertNode(&head, 2);  
    insertNode(&head, 4);  
    insertNode(&head, 5);  
    insertNode(&head, 5);  
    insertNode(&head, 6);  
    insertNode(&head, 6);  
    insertNode(&head, 7);  
    insertNode(&head, 8);  
    insertNode(&head, 9);

    printf("Before deleting duplicates:\n");  
    printList(head);

    deleteDuplicates(&head);

    printf("After deleting duplicates:\n");  
    printList(head);

    return 0;  
}