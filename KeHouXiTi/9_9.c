//用函数实现矩阵乘积
#include<stdio.h>
void fun(int a[3][3],int b[3][3],int result[3][3]){
    int i,j,k;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            result[i][j]=0;
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            for(k=0;k<3;k++){
                result[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
}
int main(){
    int a[3][3] = {{1, 0, 0}, {0, 1, 0}, {0, 0, 1}}; // 矩阵 A
    int b[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}; // 矩阵 B
    int result[3][3]; // 结果矩阵
    fun(a,b,result);
    printf("输出结果：\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }
    return 0;
}