/* 
第一题：更新结构体成员 (Pointers and Structs)
题目描述:
编写一个函数 update_score，该函数接收一个指向 Student 结构体的指针和一个新的分数。函数需要将该学生的分数更新为新分数。
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int x;
    int y;
} Point;

// TODO: 实现这个函数
Point* create_point(int x, int y) {
    // 您的代码在这里
}

int main() {
    Point* p = create_point(10, 20);
    if (p != NULL) {
        printf("Point created at: (%d, %d)\n", p->x, p->y);
        free(p); // 释放内存
    }
    return 0;
}