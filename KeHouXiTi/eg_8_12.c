//利用函数来交换两个数据的值
#include<stdio.h>
void swap(int *a,int *b){
    int t=*a;
    *a=*b;
    *b=t;
}
int main(){
    int a,b;
    printf("请输入两个数据的值：\n");
    scanf("%d %d",&a,&b);
    printf("未交换数据之前:a=%d b=%d\n",a,b);
    swap(&a,&b);
    printf("交换数据之后:a=%d b=%d",a,b);
    return 0;
}