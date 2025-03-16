#include<stdio.h>
/*  //逆序输出数字，并计算位数
int main(){
    int t,n,count=0;
    printf("请输入一个不大于五位数的正整数：\n");
    scanf("%d",&n);
    while(n!=0){
        count++;
        t=n%10;
        n=n/10;
        printf("%d",t);
    }
    printf("\n位数：%d",count);
    return 0;
}
*/
/*
    //求矩阵的非对角线上的元素之和
int main(){
    int i,j,n,sum=0;
    printf("请输入数组的规模：\n");
    scanf("%d",&n);
    int a[n][n];
    printf("请输入数组的数据：\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    //计算非对角线上的数据元素之和
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i!=j&&(i+j)!=n-1){
                sum+=a[i][j];
            }
        }
    }
    printf("非对角线上元素之和：%d",sum);
    return 0;
}
*/

/*
    //输入学生数据之后，按照字典顺序对学生的姓名进行排序
#include<string.h>
struct Student{
    char sname[20];
    char phone[12];
};
int main(){
    int N,i,j;
    printf("请输入学生的数量：\n");
    scanf("%d",&N);
    struct Student stu[N];
    printf("请输入学生信息：\n");
    for(i=0;i<N;i++){
        printf("请输入学生的姓名和手机号：\n");
        scanf("%s %s",stu[i].sname,stu[i].phone);
    }    
    //对学生姓名按照字典顺序进行排序
    for(i=0;i<N-1;i++){
        int index=i;
        for(j=i+1;j<N;j++){
            if((strcmp(stu[j].sname,stu[index].sname))<0){
                index=j;
            }
        }
        struct Student temp=stu[i];
        stu[i]=stu[index];
        stu[index]=temp;
    }
    //输入排序后的学生信息
    printf("------输入排序后的学生信息------\n");
    for(i=0;i<N;i++){
        printf("姓名：%s 手机号：%s\n",stu[i].sname,stu[i].phone);
    }
    return 0;
}

*/

    //向文件中写入指定文本
int main(){
    FILE *fp;
    fp=fopen("E:\\C\\C_Z_other\\stu.txt","w");
    if(fp==NULL){
        printf("open file error");
        return 1;
    }
    fprintf(fp,"this is a test,3.16.2025");
    fclose(fp);
    return 0;
}