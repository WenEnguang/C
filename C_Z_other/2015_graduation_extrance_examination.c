#include<stdio.h>
#include<math.h>
/*  15年复试真题//分段函数
int main(){
    int x,y;
    scanf("%d",&x);
    if(x<10){
        printf("x=%d",x+1);
    }
    else if(x>=10&&x<20){
        printf("x=%d",x*x);
    }
    else{
        printf("x=%d",6*x+9);
    }
    return 0;
}
*/
/*  //判断素数
int main(){
    int x,i,sign=1;
    scanf("%d",&x);
    if(x<2){    //非法输入
        printf("no");
    }
    for(i=2;i<=sqrt(x);i++){
        if(x%i==0){
            sign=0;
            break;
        }
    }
    if(sign==1){
        printf("yes");
    }
    else{
        printf("no");
    }
    return 0;
}
*/

/*    //求数组最大值及其下标
#define N 10
int main(){
    int a[N][N];
    int i,j,max,max_i,max_j,n;
    printf("请输入二维数组的规模：\n");
    scanf("%d",&n);
    printf("请输入二维数组的元素：\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    max=a[0][0];
    max_i=0;
    max_j=0;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(a[i][j]>max){
                max=a[i][j];
                max_i=i;
                max_j=j;
            }
        }
    }
    printf("最大值为%d，位置为(%d,%d)\n",max,max_i,max_j);
    return 0;
}
*/

/*   //统计学生的成绩并且按照平均分排序
typedef struct Student {
    char name[20];
    int grade[4];
    float avg;
}STU;
int main(){
    STU stu[10];
    int i,j;
    //输入学生信息
    for(i=0;i<3;i++){
        printf("请输入第%d个学生的姓名:\n",i+1);
        scanf("%s",stu[i].name);
        for(j=0;j<4;j++){
            printf("请输入第%d个学生的第%d门成绩：\n",i+1,j+1);
            scanf("%d",&stu[i].grade[j]);
        }
    }
    //计算平均分
    for(i=0;i<3;i++){
        int sum=0;
        for(j=0;j<4;j++){
            sum+=stu[i].grade[j];
        }
        stu[i].avg=sum/4.0;
    }
    //冒泡排序
    for(i=0;i<2;i++){
        for(j=0;j<2-i;j++){
            if(stu[j].avg<stu[j+1].avg){
                STU temp=stu[j];
                stu[j]=stu[j+1];
                stu[j+1]=temp;
            }
        }
    }
    //输出学生信息
    for(i=0;i<3;i++){
        printf("姓名：%s 平均分：%.2f\n",stu[i].name,stu[i].avg);
    }
    return 0;
}
*/
