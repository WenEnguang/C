//结构体计算机学上的平均成绩，并排序
#include<stdio.h>
struct Student{
    char sno[20];
    char sname[20];
    int grade[4];
    float avg;
};
int main(){
    int n,i,j;
    printf("请输入学生规模:\n");
    scanf("%d",&n);
    struct Student stu[n];
    //输入学生信息
    for(i=0;i<n;i++){
        printf("请输入第%d名学生学号、姓名：\n",i+1);
        scanf("%s %s",stu[i].sno,stu[i].sname);
        for(j=0;j<4;j++){
            printf("请输入第%d科成绩:\n",j+1);
            scanf("%d",&stu[i].grade[j]);
        }
    }
    //计算平均分
    for(i=0;i<n;i++){
        int sum=0;
        for(j=0;j<4;j++){
            sum+=stu[i].grade[j];
        }
        stu[i].avg=sum/4.0;
    }
    //按照平均分进行排序
    for(i=0;i<n-1;i++){
        int index=i;
        for(j=i+1;j<n;j++){
            if(stu[j].avg>stu[index].avg){
                index=j;
            }
        }
        struct Student temp=stu[i];
        stu[i]=stu[index];
        stu[index]=temp;
    }
    //数据输出
    for(i=0;i<n;i++){
        printf("学号：%s 姓名：%s ",stu[i].sno,stu[i].sname);
        printf("成绩1：%d 成绩2：%d 成绩3: %d 成绩4:%d",stu[i].grade[0],stu[i].grade[1],stu[i].grade[2],stu[i].grade[3]);
        printf("平均分：%f\n",stu[i].avg);
    }
    return 0;
}