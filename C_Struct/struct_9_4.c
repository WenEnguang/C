#include<stdio.h>
struct Student{
    char sno[20];
    char sname[20];
    int grade[3];
    float avg;
};
int main(){
    int n,i,j;
    printf("请输入学生数量：\n");
    scanf("%d",&n);
    struct Student stu[n];
    printf("------数据学生数据信息------\n");
    for(i=0;i<n;i++){
        printf("请输入第%d个学生学号,姓名：\n",i+1);
        scanf("%s %s",stu[i].sno,stu[i].sname);
        printf("请输入第%d个学生的三科成绩:\n",i+1);
        scanf("%d %d %d",&stu[i].grade[0],&stu[i].grade[1],&stu[i].grade[2]);
    }
    //计算平均分
    for(i=0;i<n;i++){
        int sum=0;
        for(j=0;j<3;j++){
            sum+=stu[i].grade[j];
        }
        stu[i].avg=sum/3.0;
    }
    //选择排序
    for(i=0;i<n-1;i++){
        int index=i;
        for(j=i+1;j<n;j++){
            if(stu[index].avg>stu[j].avg)
                index=j;
        }
        struct Student temp=stu[index];
        stu[index]=stu[i];
        stu[i]=temp;
    }
    //输出
    printf("------输出排序结果------\n");
    for(i=0;i<n;i++){
        printf("%-10s%-10s",stu[i].sno,stu[i].sname);
        for(j=0;j<3;j++){
            printf("%-10d",stu[i].grade[j]);
        }
        printf("%-10.2f",stu[i].avg);
        printf("\n");
    }
    return 0;
}