//矩阵转置
#include<stdio.h>
int main(){
    int m=3,n=3,x,y;
    int a[3][3]={1,2,3,4,5,6,7,8,9};
    int b[3][3];
    for(x=0;x<n;x++){
        for(y=0;y<m;y++){
            b[y][x]=a[x][y];
        }
    }
    //输出转置之后的矩阵
    for(x=0;x<n;x++){
        for(y=0;y<m;y++){
            printf("%d ",b[x][y]);
        }
        printf("\n");
    }
    return 0;
}