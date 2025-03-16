#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
/*
//求二维数组的每行最大值
int main(){
    int  n,m,i;
    //分配二维动态数组
    printf("请输入数组的行数和列数:\n");
    scanf("%d%d",&n,&m);
    int **a=(int **)malloc(sizeof(int *));
    for(int i=0;i<n;i++){
        a[i]=(int *)malloc(sizeof(int)*m);
    }
    printf("请输入数组元素：\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    //统计最大值并输出
    for(int i=0;i<n;i++){
        int max=a[i][0];
        for(int j=1;j<m;j++){
            if(a[i][j]>max){
                max=a[i][j];
            }
        }
        printf("第%d行的最大值是：%d\n",i+1,max);
    }
    //释放内存
    for(int i=0;i<n;i++){
        free(a[i]);
    }

    free(a);
    return 0;
}
*/
//学生信息排序

//去除文件中的数组字符
int main(){
    FILE *fp;
    char ch,str[1024];
    int i=0;
    fp=fopen("E:\\C\\C_Z_other\\stu.txt","r");
    if(fp==NULL){
        printf("open file error");
        return 0;
    }
    while((ch=fgetc(fp))!=EOF){
        if(!isdigit(ch)){
            str[i++]=ch;
        }
    }
    fp=fopen("E:\\C\\C_Z_other\\stu.txt","w");
    if(fp==NULL){
        printf("open file error");
        return 1;
    }
    fputs(str,fp);
    fclose(fp);
    return 0;
}
