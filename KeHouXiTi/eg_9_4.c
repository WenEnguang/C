#include<stdio.h>
#include<stdlib.h>
#define N 20
struct Student{
    char sno[20];
    char sname[20];
    int grade[3];
    float avg;
};
void input(struct Student stu[],int n){
    printf("请输入学生信息：\n");
    int i,j;
    for(i=0;i<n;i++){
        printf("请输入第%d位的学生学号和姓名:\n",i+1);
        scanf("%s %s",stu[i].sno,stu[i].sname);
        printf("请输入学生的三科成绩：\n");
        scanf("%d %d %d",&stu[i].grade[0],&stu[i].grade[1],&stu[i].grade[2]);
    }
}
void avg(struct Student stu[],int n){
    int i,j,sum;
    for(i=0;i<n;i++){
        sum=0;
        for(j=0;j<3;j++){
            sum+=stu[i].grade[j];
        }
        stu[i].avg=sum/3.0;
    }
}
void sort(struct Student stu[],int n){
    int i,j,index;
    for(i=0;i<n-1;i++){
        index=i;
        for(j=i+1;j<n;j++){
            if(stu[index].avg<stu[j].avg){
                index=j;
            }
        }
        struct Student temp=stu[index];
        stu[index]=stu[i];
        stu[i]=temp;
    }
}
void print(struct Student stu[],int n){
    int i;
    for(i=0;i<n;i++){
        printf("学号：%s 姓名：%s",stu[i].sno,stu[i].sname);
        printf(" 成绩1: %d 成绩2:%d 成绩3:%d ",stu[i].grade[0],stu[i].grade[1],stu[i].grade[2]);
        printf(" 平均分:%f\n",stu[i].avg);
    }
}
int main(){
    struct Student stu[N];  //最多不超过人
    int n;
    printf("请输入人数：\n");
    scanf("%d",&n);
    input(stu, n);
    avg(stu,n);
    sort(stu,n);
    print(stu,n);
    return 0;
}
