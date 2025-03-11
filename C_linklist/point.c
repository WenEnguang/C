#include<stdio.h>
#include<stdlib.h>
int main(){
    int m,n;
    printf("请输入二维数组的规模：\n");
    scanf("%d%d",&m,&n);
    //动态分配二位数组
    int **a=(int **)malloc(m*sizeof(int *));
    for(int i=0;i<m;i++){
        a[i]=(int *)malloc(n*sizeof(int));
    }
    //输入数组元素
    printf("请输入二维数组的元素：\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    //遍历每行，输出每行的最大值
    for(int i=0;i<m;i++){
        int max=a[i][0];
        for(int j=0;j<n;j++){
            if(a[i][j]>max){
                max=a[i][j];
            }
        }
        printf("第%d行的最大值为：%d\n",i+1,max);
    }
    //释放内存
    for(int i=0;i<m;i++){
        free(a[i]);
    }
    free(a);
    return 0;
}