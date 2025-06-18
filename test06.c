/*
第六题：释放整个单向链表 (Memory Management)
题目描述:
编写一个函数
free_list，该函数接收一个单向链表的头指针。函数需要遍历整个链表，并安全地释放所有节点占用的内存，防止内存泄漏。
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct SinglyNode {
    int data;
    struct SinglyNode* next;
} SinglyNode;

// TODO: 实现这个函数
void free_list(SinglyNode* head) {
    // 您的代码在这里
    if (head == NULL) {
	return;
    }
    while (head != NULL) {
	SinglyNode* iter = head;
	head = head->next;
	free(iter);
    }
}

int main() {
    // 创建一个链表: 1 -> 2 -> 3
    SinglyNode* head = (SinglyNode*)malloc(sizeof(SinglyNode));
    head->data = 1;
    head->next = (SinglyNode*)malloc(sizeof(SinglyNode));
    head->next->data = 2;
    head->next->next = (SinglyNode*)malloc(sizeof(SinglyNode));
    head->next->next->data = 3;
    head->next->next->next = NULL;

    free_list(head);

    // 此时 head 指向的内存已被释放，不应再访问
    printf("链表已成功释放。\n");

    return 0;
}
