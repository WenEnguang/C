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
    fp=fopen("E:\\c\\stu_list.txt","r");
    if(fp==NULL){
        printf("open file error");
        return 1;
    }
    //读取数据
    for(int i=0;i<3;i++){
        fscanf(fp,"%s %s %d %d %d %f",stu[i].sno,stu[i].sname,&stu[i].grade[0],&stu[i].grade[1],&stu[i].grade[2],&stu[i].avg);
    }
    //冒泡排序
    for(i=0;i<3-1;i++){
        for(j=0;j<3-i-1;j++){
            if(stu[j].avg<stu[j+1].avg){
                struct student temp;
                temp=stu[j];
                stu[j]=stu[j+1];
                stu[j+1]=temp;
            }
        }
    }
    //打开文件
    fp=fopen("E:\\c\\stu_sort.txt","w");
    if(fp==NULL){
        printf("open file error");
        return 1;
    }
    //写入文件
    for(i=0;i<3;i++){
        fprintf(fp,"%-20s %-20s %-10d %-10d %-10d %-10f",stu[i].sno,stu[i].sname,stu[i].grade[0],stu[i].grade[1],stu[i].grade[2],stu[i].avg);
        fprintf(fp,"\n");
    }
    fclose(fp);
    return 0;
}