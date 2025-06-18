/* 
第一题：更新结构体成员 (Pointers and Structs)
题目描述:
编写一个函数 update_score，该函数接收一个指向 Student 结构体的指针和一个新的分数。函数需要将该学生的分数更新为新分数。
*/

#include <stdio.h>

typedef struct {
    char* name;
    int student_id;
    double score;
} Student;

// TODO: 实现这个函数
void update_score(Student* s, double new_score) {
    if (s == NULL) {
        return;
    }
    s->score = new_score;
}

int main() {
    Student student1 = {"Alice", 101, 85.5};
    printf("原始分数: %.2f\n", student1.score);

    update_score(&student1, 92.0);
    printf("更新后的分数: %.2f\n", student1.score);

    return 0;
}