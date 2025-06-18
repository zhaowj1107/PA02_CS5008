/*
第十题：查找单向链表中所有偶数之和 (Problem Solving)
题目描述:
编写一个函数 sum_of_even，该函数接收一个单向链表的头指针。函数需要遍历整个链表，计算并返回所有节点中数据为偶数的整数之和。
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct SinglyNode {
    int data;
    struct SinglyNode* next;
} SinglyNode;

// TODO: 实现这个函数
int sum_of_even(SinglyNode* head) {
    // 您的代码在这里
}

int main() {
    // 创建链表: 1 -> 2 -> 3 -> 4 -> 5
    SinglyNode* head = (SinglyNode*)malloc(sizeof(SinglyNode)); head->data = 1;
    head->next = (SinglyNode*)malloc(sizeof(SinglyNode)); head->next->data = 2;
    head->next->next = (SinglyNode*)malloc(sizeof(SinglyNode)); head->next->next->data = 3;
    head->next->next->next = (SinglyNode*)malloc(sizeof(SinglyNode)); head->next->next->next->data = 4;
    head->next->next->next->next = (SinglyNode*)malloc(sizeof(SinglyNode)); head->next->next->next->next->data = 5;
    head->next->next->next->next->next = NULL;

    int sum = sum_of_even(head);
    printf("偶数之和是: %d\n", sum); // 应该输出: 6 (因为 2 + 4 = 6)

    // 清理内存
    SinglyNode* temp;
    while(head) {
        temp = head;
        head = head->next;
        free(temp);
    }
    
    return 0;
}