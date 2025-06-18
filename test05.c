/*
第五题：计算单向链表的长度 (Singly Linked List)
题目描述:
编写一个函数 list_length，该函数接收单向链表的头指针，并返回链表中节点的总数。
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct SinglyNode {
    int data;
    struct SinglyNode* next;
} SinglyNode;

// TODO: 实现这个函数
int list_length(SinglyNode* head) {
    // 您的代码在这里
}

int main() {
    SinglyNode* head = (SinglyNode*)malloc(sizeof(SinglyNode));
    head->data = 1;
    head->next = (SinglyNode*)malloc(sizeof(SinglyNode));
    head->next->data = 2;
    head->next->next = NULL;

    printf("链表长度是: %d\n", list_length(head)); // 应该输出: 2

    free(head->next);
    free(head);
    
    printf("空链表的长度是: %d\n", list_length(NULL)); // 应该输出: 0

    return 0;
}