/*
第十四题 (修订版): 动态创建整数数组
题目描述:
编写一个函数 create_int_array，它接收一个整数 size，然后使用 malloc 动态创建一个能容纳 size 个整数的数组，并返回指向数组头部的指针。

核心考察点: 为数组动态分配内存 (malloc)。
*/

#include <stdio.h>
#include <stdlib.h>

// TODO: 动态创建一个包含 size 个整数的数组，并返回指向它的指针。
int* create_int_array(int size) {
    // 您的代码在这里
}

int main() {
    int array_size = 5;
    int* my_array = create_int_array(array_size);

    if (my_array != NULL) {
        // 为数组赋值并打印，以验证其有效
        printf("创建的数组内容: ");
        for (int i = 0; i < array_size; i++) {
            my_array[i] = i * 10;
            printf("%d ", my_array[i]);
        }
        printf("\n");

        // TODO: 释放为 my_array 分配的内存
        // 您的代码在这里

        printf("数组内存已释放。\n");

    } else {
        printf("内存分配失败！\n");
    }

    return 0;
}