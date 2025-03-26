//用函数实现数组排序
#include<stdio.h>
int *sort(int *a,int num){
    int i,j;
    for(i=0;i<num-1;i++){
        int index=i;
        for(j=i+1;j<num;j++){
            if(a[j]>a[index])
                index=j;
        }
        int temp=a[i];
        a[i]=a[index];
        a[index]=temp;
    }
    return a;
}
int main(){
    int i,a[10];
    printf("请输入数组数据：\n");
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    sort(a,10); 
    printf("排序之后的数组元素：\n");
    for(i=0;i<10;i++){
        printf("%d ",a[i]);
    }
    return 0;
 } 