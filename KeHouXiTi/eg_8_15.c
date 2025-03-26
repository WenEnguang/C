//利用函数实现递归调用
#include<stdio.h>
int fun(int n){
    if(n<=0)
        return 1;
    else    
        return n*fun(n-1);
}
int main(){
    int n;
    printf("请输入一个正整数数字：\n");
    scanf("%d",&n);
    int x=fun(n);
    printf("n的阶乘:%d",x);
    return 0;
}