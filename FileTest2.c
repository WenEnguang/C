#include<stdio.h>
struct student{
    char sno[20];
    char sname[20];
    int grade[3];
    float avg;
}stu[6];
int main(){
    FILE *fp;
    struct student stu_ins;
    int i,j;
    //输入学生信息
    printf("请输入插入学生的学号：\n");
    scanf("%s",stu_ins.sno);
    printf("请输入插入学生的姓名：\n");
    scanf("%s",stu_ins.sname);
    for(j=0;j<3;j++){
        printf("请输入插入学生的第%d科成绩：",j+1);
        scanf("%d",&stu_ins.grade[j]);
    }
    stu_ins.avg=(stu_ins.grade[0]+stu_ins.grade[1]+stu_ins.grade[2])/3.0;
    //打开文件
    fp=fopen("E:\\c\\stu_sort.txt","r");
    if(fp==NULL){
        printf("open file error");
        return 1;
    }
    //读取文件学生数据信息
    for(int i=0;i<3;i++){
        fscanf(fp,"%s %s %d %d %d %f",stu[i].sno,stu[i].sname,&stu[i].grade[0],&stu[i].grade[1],&stu[i].grade[2],&stu[i].avg);
    }
    //尾插法插入数据
    // 尾插法插入数据（从后往前移动）
    int pos; // 用来记录新数据插入的位置
    for(i = 2; i >= 0; i--){
        if(stu_ins.avg > stu[i].avg){
            // 新学生的平均分更高，需要将当前记录右移
            stu[i+1] = stu[i];
        } else {
            break; // 找到了位置：stu[i].avg >= stu_ins.avg
        }
    }
    pos = i + 1;    // 插入位置
    stu[pos] = stu_ins;  // 插入新数据


    //打开文件
    fp=fopen("E:\\c\\stu_sort_insert.txt","w");
    if(fp==NULL){
        printf("open file error");
        return 1;
    }
    //写入文件
    for(i=0;i<=3;i++){
        fprintf(fp,"%-20s %-20s %-10d %-10d %-10d %-10f",stu[i].sno,stu[i].sname,stu[i].grade[0],stu[i].grade[1],stu[i].grade[2],stu[i].avg);
        fprintf(fp,"\n");
    }
    fclose(fp);
    return 0;
}