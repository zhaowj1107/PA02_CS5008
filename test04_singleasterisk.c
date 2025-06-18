/*
test04：Insert at head (Singly Linked List)

*/

#include <stdio.h>
#include <stdlib.h>

typedef struct SinglyNode {
    int data;
    struct SinglyNode* next;
} SinglyNode;

// Declaration.
SinglyNode* create_singly_node(int data);
void print_list(SinglyNode* head);

// TODO
void insert_at_head(SinglyNode* head, int data) {
    // write your code here.
    if (head == NULL) {
	return;
    }
    SinglyNode* new_node = (SinglyNode*)malloc(sizeof(SinglyNode));
    if (new_node == NULL) {
	return;
    }
    new_node->data = data;
    new_node->next = head;
    head = new_node;
}

int main() {
    SinglyNode* head = create_singly_node(100);
    insert_at_head(head, 10);
    insert_at_head(head, 20);
    printf("Linked list output: ");
    print_list(head);  // Output: 100

    // Free space (short-cut)
    // free(head->next->next);
    // free(head->next);
    free(head);

    return 0;
}

// helper function
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
