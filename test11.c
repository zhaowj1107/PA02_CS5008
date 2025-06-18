/*
第十一题 (修订版): 使用指针交换两个整数
题目描述:
编写一个函数 swap_integers，该函数接收两个整数的指针作为参数。函数体内部必须通过指针来交换这两个整数的值，使得调用函数之后，main 函数中的原始变量值发生改变。

核心考察点: 函数通过指针修改调用方的变量。
*/

#include <stdio.h>

// TODO: 实现这个函数，通过指针交换 a 和 b 的值。
void swap_integers(int* ptr_a, int* ptr_b) {
    // 您的代码在这里
}

int main() {
    int a = 10;
    int b = 20;

    printf("交换前: a = %d, b = %d\n", a, b);

    // 将变量 a 和 b 的地址传给函数
    swap_integers(&a, &b);

    printf("交换后: a = %d, b = %d\n", a, b); // 应该输出 a = 20, b = 10

    return 0;
}