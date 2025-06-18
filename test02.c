/*
第二题：动态创建结构体 (Dynamic Memory Allocation)
题目描述:
编写一个函数 create_point，该函数接收两个整数 x 和 y
作为坐标。函数需要动态分配一个 Point
结构体的内存，用传入的坐标初始化它，并返回一个指向这个新创建的结构体的指针。
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
	free(p);  // 释放内存
    }
    return 0;
}
