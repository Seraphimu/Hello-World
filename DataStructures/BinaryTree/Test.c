#include <stdio.h>
#include <stdlib.h>

typedef struct BTNode {
    struct BTNode * left;
    struct BTNode * right;
    int val;
}BTNode;

BTNode * BuyNode(int x) {
    BTNode * node = (BTNode *)malloc(sizeof(BTNode));
    if (node == NULL) {
        perror("malloc failed");
        exit(-1);
    }

    node->val = x;
    node->left = NULL;
    node->right = NULL;

    return node;
}

void PrevOrder(BTNode * root) {
    if (root == NULL) {
        printf("NULL ");
        return;
    }
    
    printf("%d ", root->val);
    PrevOrder(root->left);
    PrevOrder(root->right);
}

void InOrder(BTNode * root) {
    if (root == NULL) {
        printf("NULL ");
        return;
    }

    InOrder(root->left);
    printf("%d ", root->val);
    InOrder(root->right);
}

int SumLeaf(BTNode * root)
{
    BTNode * cur = root;
    //树为空
    if (cur == NULL)
        return 0;
    //为叶子结点时
    if (cur->left == NULL && cur->right == NULL)
        return cur->val;
    //不为叶子结点时
    if (cur->left != NULL || cur->right != NULL)
        return SumLeaf(cur->left) + SumLeaf(cur->right);
}


int main(void) {
    BTNode * node1 = BuyNode(1);
    BTNode * node2 = BuyNode(1);
    BTNode * node3 = BuyNode(4);
    BTNode * node4 = BuyNode(5);
    BTNode * node5 = BuyNode(1);
    BTNode * node6 = BuyNode(4);
    
    node1->left = node2;
    node1->right = node3;
    node2->left = node4;
    node2->right = node5;
    node3->left = node6;


    printf("%d\n", SumLeaf(node1));



    return 0;
}