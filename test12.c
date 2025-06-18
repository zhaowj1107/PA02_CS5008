/*
第十二题 (修订版): 使用指针初始化结构体
题目描述:
给定一个 Book 结构体。编写一个函数 init_book，它接收一个指向 Book 结构体的指针以及书本的标题和ID。函数需要通过指针来初始化该结构体的成员。

核心考察点: 使用 -> 操作符通过指针访问结构体成员。
*/

#include <stdio.h>
#include <string.h>

typedef struct {
    int book_id;
    char title[100];
} Book;

// TODO: 通过指针 p，用给定的 id 和 title 初始化结构体。
void init_book(Book* p, int id, const char* title) {
    // 您的代码在这里
}

int main() {
    Book my_book; // 在栈上创建一个 Book 结构体变量

    // 调用函数，传入 my_book 的地址来进行初始化
    init_book(&my_book, 101, "The C Programming Language");

    printf("书本ID: %d\n", my_book.book_id);
    printf("书名: %s\n", my_book.title);

    return 0;
}