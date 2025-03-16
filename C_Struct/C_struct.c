#include<stdio.h>
struct student{
    char sno[20];
    char name[20];
    int score[3];
    float avg;
};
int main(){
    int i,j,n;
    scanf("%d",&n);
    struct student stu[n];
    //输入学生信息
    for(i=0;i<n;i++){
        printf("请输入第%d个学生的学号和姓名：",i+1);
        scanf("%s %s",stu[i].sno,stu[i].name);
        for(j=0;j<3;j++){
            printf("请输入第%d个学生的第%d门课成绩：",i+1,j+1);
            scanf("%d",&stu[i].score[j]);
        }
    }
    //求平均分
    for(i=0;i<n;i++){
        int sum=0;
        for(j=0;j<3;j++){
            sum+=stu[i].score[j];
        }
        stu[i].avg=sum/3.0;
    }
    //求最大值
    int max=stu[0].avg,max_index=0;
    for(i=1;i<n;i++){
        if(stu[i].avg>max){
            max=stu[i].avg;
            max_index=i;
        }
    }
    printf("---------输出学生成绩---------\n");
    for(i=0;i<n;i++){
        printf("第%d个学生的学号：%s\n",i+1,stu[i].sno);
        printf("第%d个学生的姓名：%s\n",i+1,stu[i].name);
        printf("第%d个学生的成绩：",i+1);
        for(j=0;j<3;j++){
            printf("%d ",stu[i].score[j]);
        }
        printf("\n第%d个学生的平均成绩：%.2f\n",i+1,stu[i].avg);
    }
    //输出最大的学生信息
    printf("---------输出最大成绩学生---------\n");
    printf("最大成绩学生学号：%s\n",stu[max_index].sno);
    printf("最大成绩学生姓名：%s\n",stu[max_index].name);
    printf("最大成绩学生成绩：");
    for(j=0;j<3;j++){
        printf("%d ",stu[max_index].score[j]);
    }
    printf("\n最大成绩学生平均成绩：%.2f\n",stu[max_index].avg);
    return 0;
}