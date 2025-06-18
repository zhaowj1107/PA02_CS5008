/*
第八题：在双向链表尾部插入节点 (Doubly Linked List)
题目描述:
编写一个函数
insert_at_tail，该函数接收双向链表的头指针和一个整数。函数需要在链表的末尾添加一个新节点。

Starter Code:
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct DoublyNode {
    int data;
    struct DoublyNode* prev;
    struct DoublyNode* next;
} DoublyNode;

// 函数声明
DoublyNode* create_doubly_node(int data);
void print_doubly_list(DoublyNode* head);

// TODO: 实现这个函数
void insert_at_tail(DoublyNode** head, int data) {
    // 您的代码在这里
    DoublyNode* new_node = create_doubly_node(data);
    if (new_node == NULL) {
	return;
    }

    if (*head == NULL) {
	*head = new_node;
	return;
    }

    DoublyNode* current = *head;
    while (current->next != NULL) {
	current = current->next;
    }
    current->next = new_node;
    new_node->prev = current;
}

int main() {
    DoublyNode* head = NULL;
    insert_at_tail(&head, 10);
    print_doubly_list(head);
    insert_at_tail(&head, 20);
    insert_at_tail(&head, 30);

    printf("双向链表内容: ");
    print_doubly_list(head);  // 应该输出: 10 20 30

    // 清理内存
    while (head) {
	DoublyNode* temp = head;
	head = head->next;
	free(temp);
    }

    return 0;
}

// 辅助函数 (已实现)
DoublyNode* create_doubly_node(int data) {
    DoublyNode* new_node = (DoublyNode*)malloc(sizeof(DoublyNode));
    if (!new_node) return NULL;
    new_node->data = data;
    new_node->prev = NULL;
    new_node->next = NULL;
    return new_node;
}

void print_doubly_list(DoublyNode* head) {
    DoublyNode* current = head;
    while (current != NULL) {
	printf("%d ", current->data);
	current = current->next;
    }
    printf("\n");
}
