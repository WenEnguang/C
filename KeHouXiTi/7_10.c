//找到每列最大值，并且与对角线元素对换数值
#include<stdio.h>
int main(){
    int a[6][6];
    int i,j;
    printf("请输入6x6的数组矩阵：\n");
    for(i=0;i<6;i++){
        for(j=0;j<6;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(j=0;j<6;j++){
        int max=a[0][j];
        int max_index=0;
        for(i=0;i<6;i++){
            if(max<a[i][j]){
                max=a[i][j];
                max_index=i;
            }
        }
        //与对角线交换数据
        int temp=a[j][j];
        a[j][j]=a[max_index][j];
        a[max_index][j]=temp;
    }
    //打印数据
    printf("处理之后的数组矩阵：\n");
    for(i=0;i<6;i++){
        for(j=0;j<6;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}