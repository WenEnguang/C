//利用函数实现求矩阵中所有元素的最大值
#include<stdio.h>
int fun(int a[][4]){
    int i,j;
    int max=a[0][0];
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            if(a[i][j]>max){
                max=a[i][j];
            }
        }
    }
    return max;
}
int main(){
    int a[3][4];
    int i,j,max;
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            scanf("%d",&a[i][j]);
        }
    }
    max=fun(a);
    printf("max=%d",max);
    return 0;
}