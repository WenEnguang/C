#include<stdio.h>
/*      //判断一个正整数既是五的倍数又是七的倍数
int main(){
    int n;
    printf("请输入一个正整数数字：\n");
    scanf("%d",&n);
    if(n<=0){
        printf("输入错误");
}
    if(n%5==0&&n%7==0){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}
    */
/** //计算1~n之间所有偶数的和
int main(){
    int n,sum=0;
    printf("请输入一个正整数数字：\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(i%2==0){
            sum+=i;
        }
    }
    printf("sum=%d",sum);
    return 0;
}
    */

 /*   //找到主对角线上的元素最大值和所在行号
int main(){
    int i,j,max,max_i;
    int a[3][3];
    printf("请输入3x3的数组：\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    max=a[0][0];
    max_i=0;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(i==j&&max<a[i][j]){
                max=a[i][j];
                max_i=i;
            }
        }
    }
    printf("max:%d max_i:%d",max,max_i);
    return 0;
}
    */
/*      //建立学生信息表，排序之后进行输出
struct Student{
    char sno[20];
    char sname[20];
    int grade[3];
    float avg;
};
int main(){
    int i,j,n;
    printf("请输入学生人数：\n");
    scanf("%d",&n);
    struct Student stu[n];
    for(i=0;i<n;i++){
        printf("请输入第%d个的学生学号和姓名：\n",i+1);
        scanf("%s %s",stu[i].sno,stu[i].sname);
        for(j=0;j<3;j++){
            printf("请输入该学生的第%d科成绩:\n",j+1);
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
    //排序，从高到低
    for(i=0;i<n-1;i++){
        int index=i;
        for(j=i+1;j<n;j++){
            if(stu[j].avg>stu[index].avg){
                index=j;
            }
        }
        struct Student temp=stu[index];
        stu[index]=stu[i];
        stu[i]=temp;
    }
    //输出排序之后的结果
    for(i=0;i<n;i++){
        printf("学号：%s 姓名：%s 学科1：%d 学科2：%d 学科3：%d 平均分：%f\n",stu[i].sno,stu[i].sname,stu[i].grade[0],stu[i].grade[1],stu[i].grade[2],stu[i].avg);
    }
    return 0;
}
*/

/*   //向文件中写入具体字符1.0
int  main(){
    FILE *fp;
    fp=fopen("E:\\C\\C_Z_other\\stu.txt","w");
    if(fp==NULL){
        printf("打开文件失败");
        return 1;
    }
    fprintf(fp,"this is a test");
    fclose(fp);
    return 0;
}
*/

    //向文件中写入具体字符2.0
int main(){
    FILE *fp;
    char str[100];
    fp=fopen("E:\\C\\C_Z_other\\stu.txt","w");
    if(fp==NULL){
        printf("打开文件失败");
        return 1;
    }
    printf("请输入字符串：\n");
    if((fgets(str,sizeof(str),stdin)==NULL)){
        printf("输入失败");
        return 1;
    }
    fputs(str,fp);
    fclose(fp);
    return 0;
}