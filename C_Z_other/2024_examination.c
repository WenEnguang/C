#include<stdio.h>
/*  //哥德巴赫猜想
#include<math.h>
int is_prune(int n){
    int i;
    for(i=2;i<=sqrt(n);i++){
        if(n%i==0)
            return 0;
    }
    if(i>sqrt(n)){
        return n;
    }
}
int main(){
    int n,count=0;
    printf("请输入一个正偶数：\n");
    scanf("%d",&n);
    if(n%2!=0||n<=0){
        printf("输入错误！");
    }
    for(int i=2;i<n;i++){
        if(is_prune(i)&&is_prune(n-i)){
            printf("%d %d\n",i,n-i);
            count++;
        }
    }
    printf("总计数：%d",count);
    return 0;
}
*/

/*    //比较字符串，输出最长的串
#include<string.h>
int main(){
    int n;
    char max_str[1000]="";
    printf("请输入字符串个数：\n");
    scanf("%d",&n);
    int max_len=0;
    getchar();  //清空缓冲区
    for(int i=0;i<n;i++){
        char str[1000]="";
        fgets(str,sizeof(str),stdin);
        str[strcspn(str,"\n")]='\0';
        if(max_len<strlen(str)){
            max_len=strlen(str);
            strcpy(max_str,str);
        }
    }
    printf("字符串长度和串：%d %s",max_len,max_str);
    return 0;
}   
*/

    //输出比规定学生的成绩要高的成绩
    #include <stdlib.h>
    #include <string.h>
    
    // 定义学生结构体
    typedef struct Student {
        int id;          // 学号
        char name[50];   // 姓名
        float score;     // 成绩
        struct Student *next; // 指向下一个节点的指针
    } Student;
    
    // 创建新节点
    Student* createStudent(int id, char name[], float score) {
        Student *newStudent = (Student*)malloc(sizeof(Student)); // 分配内存
        newStudent->id = id;
        strcpy(newStudent->name, name); // 复制姓名
        newStudent->score = score;
        newStudent->next = NULL; // 初始化 next 指针为 NULL
        return newStudent;
    }
    
    // 插入节点到链表尾部
    void insertStudent(Student **head, int id, char name[], float score) {
        Student *newStudent = createStudent(id, name, score); // 创建新节点
        if (*head == NULL) {
            *head = newStudent; // 如果链表为空，新节点为头节点
        } else {
            Student *temp = *head;
            while (temp->next != NULL) {
                temp = temp->next; // 找到链表尾部
            }
            temp->next = newStudent; // 将新节点插入链表尾部
        }
    }
    
    // 输出成绩高于指定值的学生信息
    void printStudentsAboveScore(Student *head, float targetScore) {
        Student *temp = head;
        while (temp != NULL) {
            if (temp->score > targetScore) { // 判断成绩是否高于目标值
                printf("学号: %d, 姓名: %s, 成绩: %.2f\n", temp->id, temp->name, temp->score);
            }
            temp = temp->next; // 移动到下一个节点
        }
    }
    
    // 释放链表内存
    void freeList(Student *head) {
        Student *temp;
        while (head != NULL) {
            temp = head; // 保存当前节点
            head = head->next; // 移动到下一个节点
            free(temp); // 释放当前节点内存
        }
    }
    
    int main() {
        Student *head = NULL; // 链表头节点
        int id;
        char name[50];
        float score, targetScore;
    
        // 输入学生信息
        printf("请输入学生信息（学号为0时停止输入）：\n");
        while (1) {
            printf("学号: ");
            scanf("%d", &id);
            if (id == 0) { // 学号为0时停止输入
                break;
            }
            printf("姓名: ");
            scanf("%s", name);
            printf("成绩: ");
            scanf("%f", &score);
            insertStudent(&head, id, name, score); // 插入链表
        }
    
        // 输入目标成绩
        printf("请输入目标成绩: ");
        scanf("%f", &targetScore);
    
        // 输出成绩高于目标值的学生信息
        printf("成绩高于 %.2f 的学生信息：\n", targetScore);
        printStudentsAboveScore(head, targetScore);
    
        // 释放链表内存
        freeList(head);
    
        return 0;
    }