/*
第九题：删除双向链表中的指定节点 (Doubly Linked List)
题目描述:
编写一个函数 delete_node，该函数接收一个指向双向链表头指针的指针 (DoublyNode** head) 和一个要删除的整数值。函数应找到第一个具有该值的节点，将其从链表中移除，并释放其内存。注意处理头节点、尾节点和中间节点被删除的情况。
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct DoublyNode {
    int data;
    struct DoublyNode* prev;
    struct DoublyNode* next;
} DoublyNode;

// 必要的辅助函数 (此处省略，假设已存在)
void insert_at_tail(DoublyNode** head, int data);
void print_doubly_list(DoublyNode* head);
void free_doubly_list(DoublyNode* head);


// TODO: 实现这个函数
void delete_node(DoublyNode** head, int value_to_delete) {
    // 您的代码在这里
}

int main() {
    DoublyNode* head = NULL;
    insert_at_tail(&head, 10);
    insert_at_tail(&head, 20);
    insert_at_tail(&head, 30);

    printf("原始链表: ");
    print_doubly_list(head);

    delete_node(&head, 20); // 删除中间节点
    printf("删除 20后: ");
    print_doubly_list(head);

    delete_node(&head, 10); // 删除头节点
    printf("删除 10后: ");
    print_doubly_list(head);
    
    free_doubly_list(head);
    return 0;
}

// 辅助函数 (为方便测试，提供简单实现)
void insert_at_tail(DoublyNode** head, int data) {
    DoublyNode* new_node = (DoublyNode*)malloc(sizeof(DoublyNode));
    new_node->data = data; new_node->next = NULL; new_node->prev = NULL;
    if (*head == NULL) { *head = new_node; return; }
    DoublyNode* temp = *head;
    while(temp->next != NULL) temp = temp->next;
    temp->next = new_node;
    new_node->prev = temp;
}
void print_doubly_list(DoublyNode* head) {
    while(head) { printf("%d ", head->data); head = head->next; }
    printf("\n");
}
void free_doubly_list(DoublyNode* head) {
    DoublyNode* temp;
    while(head) { temp = head; head = head->next; free(temp); }
}