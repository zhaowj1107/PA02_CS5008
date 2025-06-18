/*
第十四题 (修订版): 动态复制字符串
题目描述:
编写一个函数 string_duplicate，它接收一个字符串作为参数。函数需要：

计算原字符串的长度。
使用 malloc 分配一块大小合适的新内存。
将原字符串的内容复制到新内存中。
返回指向新内存的指针。
核心考察点: 结合 malloc 和字符串函数 (strlen, strcpy)。
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// TODO: 创建一个给定字符串的动态副本。
char* string_duplicate(const char* original) {
    // 您的代码在这里
}

int main() {
    const char* source_string = "Hello, Pointers!";
    
    char* copied_string = string_duplicate(source_string);

    if (copied_string != NULL) {
        printf("原始字符串: %s\n", source_string);
        printf("拷贝的字符串: %s\n", copied_string);

        // 验证它们是否指向不同的内存地址
        if (source_string != copied_string) {
            printf("成功！两个字符串存储在不同的内存地址。\n");
        }

        // TODO: 释放为 copied_string 分配的内存
        // 您的代码在这里
        
        printf("拷贝的字符串内存已释放。\n");
    } else {
        printf("内存分配失败！\n");
    }

    return 0;
}