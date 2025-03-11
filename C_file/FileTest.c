#include<stdio.h>
struct student{
    char sno[20];
    char sname[20];
    int grade[3];
    float avg;
}stu[5];
int main(){
    FILE *fp;
    int i,j;
    //打开文件
    fp=fopen("E:\\c\\stu_list.txt","w+");
    if(fp==NULL){
        printf("open file error");
        return 1;
    }
    //输入学生信息
    for(i=0;i<3;i++){
        printf("请输入第%d位学生的学号：\n",i+1);
        scanf("%s",stu[i].sno);
        printf("请输入第%d位学生的姓名：\n",i+1);
        scanf("%s",stu[i].sname);
        for(j=0;j<3;j++){
            printf("请输入第%d位学生的第1科成绩：",i+1);
            scanf("%d",&stu[i].grade[j]);
        }
    }
    //计算平均成绩
    for(i=0;i<3;i++){
        int sum=0;
        for(j=0;j<3;j++){
            sum+=stu[i].grade[j];
        }
        stu[i].avg=(sum/3.0);
    }
    //写入文件
    for(i=0;i<3;i++){
            fprintf(fp,"%-20s %-20s %-10d %-10d %-10d %-10f",stu[i].sno,stu[i].sname,stu[i].grade[0],stu[i].grade[1],stu[i].grade[2],stu[i].avg);
            fprintf(fp,"\n");
    }
    fclose(fp);
    return 0;
}