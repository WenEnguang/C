//二维数组动态分配
#include<stdio.h>
#include<stdlib.h>
int main(){
    int m,n;
    printf("请输入二维数组的规模：\n");
    scanf("%d %d",&m,&n);
    int **a=(int **)malloc(m*sizeof(int *));
    printf("请输入二维数组的数据:\n");
    for(int i=0;i<m;i++){
        a[i]=(int *)malloc(n*sizeof(int));
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<m;i++){
        free(a[i]);
    }
    free(a);
    return 0;
}