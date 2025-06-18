/*
动态结构体数组 (Dynamic Array of Structs)
题目描述:
您需要管理一个班级的学生信息。编写一个函数 create_classroom，该函数接收一个整数 num_students，并动态地创建一个能容纳相应数量 Student 结构体的数组。
然后再编写一个函数 find_student_by_id 来查找特定ID的学生，以及一个 free_classroom 函数来释放所有分配的内存。
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int id;
    char name[50];
    float gpa;
} Student;

// TODO 1: 动态分配一个能容纳 num_students 个 Student 的数组，并返回指向数组起始位置的指针。
Student* create_classroom(int num_students) {
    // 您的代码在这里
}

// TODO 2: 在给定的 classroom 数组中，查找具有特定 id 的学生。
// 如果找到，返回指向该学生结构体的指针。如果找不到，返回 NULL。
Student* find_student_by_id(Student* classroom, int num_students, int target_id) {
    // 您的代码在这里
}

// TODO 3: 释放整个 classroom 数组占用的内存。
void free_classroom(Student* classroom) {
    // 您的代码在这里
}

int main() {
    int num_students = 3;
    Student* my_class = create_classroom(num_students);

    if (my_class == NULL) {
        printf("内存分配失败！\n");
        return 1;
    }

    // 初始化学生数据 (为了测试)
    strcpy(my_class[0].name, "Alice");
    my_class[0].id = 101;
    my_class[0].gpa = 3.8f;

    strcpy(my_class[1].name, "Bob");
    my_class[1].id = 102;
    my_class[1].gpa = 3.5f;

    strcpy(my_class[2].name, "Charlie");
    my_class[2].id = 103;
    my_class[2].gpa = 3.9f;

    int id_to_find = 102;
    Student* found_student = find_student_by_id(my_class, num_students, id_to_find);

    if (found_student != NULL) {
        printf("找到了ID为 %d 的学生, 姓名: %s, GPA: %.2f\n", id_to_find, found_student->name, found_student->gpa);
    } else {
        printf("未找到ID为 %d 的学生。\n", id_to_find);
    }

    free_classroom(my_class);
    printf("教室内存已释放。\n");

    return 0;
}