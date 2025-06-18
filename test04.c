/*
第四题：在单向链表头部插入节点 (Singly Linked List)
题目描述:
编写一个函数 insert_at_head，该函数接收一个指向单向链表头指针的指针 (SinglyNode** head) 和一个整数。函数需要创建一个新节点，并将其插入到链表的头部。
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct SinglyNode {
    int data;
    struct SinglyNode* next;
} SinglyNode;

// 函数声明
SinglyNode* create_singly_node(int data);
void print_list(SinglyNode* head);

// TODO: 实现这个函数
void insert_at_head(SinglyNode** head, int data) {
    // 您的代码在这里
}

int main() {
    SinglyNode* head = NULL;
    insert_at_head(&head, 10);
    insert_at_head(&head, 20);
    printf("链表内容: ");
    print_list(head); // 应该输出: 20 10
    
    // 清理链表内存 (为了简单起见，这里手动释放)
    free(head->next);
    free(head);

    return 0;
}

// 辅助函数 (已实现)
SinglyNode* create_singly_node(int data) {
    SinglyNode* new_node = (SinglyNode*)malloc(sizeof(SinglyNode));
    if (new_node == NULL) return NULL;
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}

void print_list(SinglyNode* head) {
    SinglyNode* current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}