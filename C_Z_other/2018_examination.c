#include<stdio.h>
/*    //求e的值
int main(){
    int i,t=1;
    double sum=1;
    for(i=1;;i++){
        t=t*i;
        sum+=1.0/t;
        if(1.0/t<1e-5){
            break;
        }
    }
    printf("e=%f",sum);
    return 0;
}
*/
/*   //将数字左移一位
int *fun(int *a,int n){
    int i,temp;
    temp=a[0];
    for(i=1;i<10;i++){
        a[i-1]=a[i];
    }
    a[n-1]=temp;
    return a;
}
int main(){
    int i,a[10];
    printf("请输入10个数字：\n");
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    fun(a,10);
    for(i=0;i<10;i++){
        printf("%d ",a[i]);
    }
    return 0;
}
*/
/*   //求出最高分的学生数据
struct Student{
    char sno[20];
    char sname[20];
    int grade[3];
    float avg;
};
int main(){
    int i,j,n;
    printf("请输入学生数量：\n");
    scanf("%d",&n);
    struct Student stu[n];
    for(i=0;i<n;i++){
        printf("请输入第%d位的学生学号、姓名：\n",i+1);
        scanf("%s %s",stu[i].sno,stu[i].sname);
        for(j=0;j<3;j++){
            printf("请输入第%d科的成绩:\n",j+1);
            scanf("%d",&stu[i].grade[j]);
        }
    }
    //计算平均分
    for(i=0;i<n;i++){
        int sum=0;
        for(j=0;j<3;j++){
            sum+=stu[i].grade[j];
        }
        stu[i].avg=sum/3.0;
    }
    //求出最大平均分的学生信息
    float max=stu[0].avg;
    int max_index=0;
    for(i=1;i<n;i++){
        if(stu[i].avg>max){
            max=stu[i].avg;
            max_index=i;
        }
    }
    i=max_index;
    printf("最高平均分学生学号：%s 姓名：%s 学科1：%d 学科2：%d 学科3：%d 平均分：%f\n",stu[i].sno,stu[i].sname,stu[i].grade[0],stu[i].grade[1],stu[i].grade[2],stu[i].avg);
}
*/

    //消除文件中的特定字符
int main(){
    FILE *fp;
    char str[1024],ch;
    int i=0;
    fp=fopen("E:\\C\\C_Z_other\\stu.txt","r");
    if(fp==NULL){
        printf("open file error");
        return 1;
    }
    while((ch=fgetc(fp))!=EOF){
        if(ch!='s'){
            str[i++]=ch;
        }
    }
    fclose(fp);
    fp=fopen("E:\\C\\C_Z_other\\stu.txt","w");
    if(fp==NULL){
        printf("open file error");
        return 1;
    }
    fputs(str,fp);
    fclose(fp);
    return 0;
}