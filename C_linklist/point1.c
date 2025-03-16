#include<stdio.h>
#include<stdlib.h>
// 求二维数组中的最大值
int max(int *a,int m,int n){
    int max=*a;
    int i,j;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(max<*(a+i*n+j))
                max=*(a+i*n+j);
        }
    }
    return max;
}
int main(){
    int i,j,m,n;
    printf("请输入二维数组的规模：\n");
    scanf("%d %d",&m,&n);
    int a[m][n];
    printf("请输入数据：\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    // 求最大值
    int b=max(*a,m,n);
    printf("max=%d",b);
    return 0;
}