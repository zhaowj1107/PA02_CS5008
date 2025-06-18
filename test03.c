/* 
第三题：创建单向链表节点 (Singly Linked List)
题目描述:
定义一个 SinglyNode 结构体，并编写一个函数 create_singly_node。该函数接收一个整数作为数据，动态分配一个新节点，将数据存入节点，并返回指向该节点的指针。
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct SinglyNode {
    int data;
    struct SinglyNode* next;
} SinglyNode;

// TODO: 实现这个函数
SinglyNode* create_singly_node(int data) {
    // 您的代码在这里
}

int main() {
    SinglyNode* node = create_singly_node(50);
    if (node != NULL) {
        printf("新节点的数据是: %d\n", node->data);
        free(node);
    }
    return 0;
}