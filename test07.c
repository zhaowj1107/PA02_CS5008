/*
第七题：创建双向链表节点 (Doubly Linked List)
题目描述:
定义一个 DoublyNode 结构体，并编写一个函数 create_doubly_node。该函数接收一个整数作为数据，动态分配一个新节点，初始化其数据以及 prev 和 next 指针，并返回指向该节点的指针。
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct DoublyNode {
    int data;
    struct DoublyNode* prev;
    struct DoublyNode* next;
} DoublyNode;

// TODO: 实现这个函数
DoublyNode* create_doubly_node(int data) {
    // 您的代码在这里
}

int main() {
    DoublyNode* node = create_doubly_node(100);
    if (node != NULL) {
        printf("新节点数据: %d\n", node->data);
        if (node->prev == NULL && node->next == NULL) {
            printf("节点的 prev 和 next 指针已正确初始化为 NULL。\n");
        }
        free(node);
    }
    return 0;
}