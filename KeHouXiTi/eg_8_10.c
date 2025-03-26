//利用函数实现冒泡排序
#include<stdio.h>
void sort(int *a,int n){
    int i,j;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(a[j]<a[j+1]){
                int t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;            
            }
        }
    }
}
int main(){
    int a[10]={0};
    printf("请输入数据：\n");
    for(int i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    sort(a,10);
    for(int i=0;i<10;i++){
        printf("%d ",a[i]);
    }
    return 0;
}