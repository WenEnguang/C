#include <stdio.h>

int main() {
    int a = 1, b = 2, c = 3;
    int *arr[3] = {&a, &b, &c};  // arr 是一个包含 3 个 int* 类型指针的数组

    printf("First element: %d\n", *arr[0]);  // 输出 1
    printf("Second element: %d\n", *arr[1]);
    printf("Third element: %d\n", *arr[2]);
    return 0;
}