#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    char name[20];
    char tele[12];
    struct Student *next;
};

// 将 newNode 按姓名插入到已排序链表 sorted 中（按升序排列）
struct Student* insertSorted(struct Student* sorted, struct Student* newNode) {
    // 如果 sorted 为空，或 newNode 的姓名比 sorted 结点的姓名更小，
    // 则 newNode 成为新的链表头。
    if (sorted == NULL || strcmp(newNode->name, sorted->name) < 0) {
        newNode->next = sorted;
        return newNode;
    } else {
        struct Student *current = sorted;
        // 找到第一个大于 newNode 的位置
        while (current->next != NULL && strcmp(current->next->name, newNode->name) < 0) {
            current = current->next;
        }
        newNode->next = current->next;
        current->next = newNode;
        return sorted;
    }
}

int main(){
    int N;
    printf("请输入学生人数: ");
    scanf("%d", &N);
    
    // 构建链表（带有一个头结点，可选，也可以直接建立无哑结点链表）
    // 这里不使用哑结点，直接构造链表头。
    struct Student *head = NULL, *p;
    
    // 输入学生信息，建立链表（无序）
    for (int i = 0; i < N; i++){
        p = (struct Student *)malloc(sizeof(struct Student));
        if(p == NULL){
            printf("内存分配失败！\n");
            exit(1);
        }
        printf("请输入第%d个学生的姓名和联系方式：\n", i + 1);
        scanf("%s %s", p->name, p->tele);
        p->next = head;
        head = p;
    }
    
    // 按照学生姓名排序：使用插入排序将链表重新构造为有序链表
    struct Student *sorted = NULL;
    while (head != NULL) {
        // 从原链表中取出头结点
        p = head;
        head = head->next;
        // 将 p 插入到 sorted 链表中（保持升序）
        sorted = insertSorted(sorted, p);
    }
    
    // 输出排序后的链表
    p = sorted;
    printf("\n排序后的学生信息：\n");
    while (p != NULL) {
        printf("姓名：%20s  电话：%20s\n", p->name, p->tele);
        p = p->next;
    }
    
    // 释放链表内存（可选）
    while (sorted != NULL) {
        p = sorted;
        sorted = sorted->next;
        free(p);
    }
    
    return 0;
}
