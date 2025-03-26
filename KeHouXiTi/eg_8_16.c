//求解斐波那契数列
#include<stdio.h>
int fun(int n){
    int t,n1=1,n2=1,i;
    if(n==1||n==2)
        return 1;
    else
        t=fun(n-1)+fun(n-2);
    return t;
}
int main(){
    int n;
    printf("请输入一个正整数数字：\n");
    scanf("%d",&n);
    printf("第%d项的斐波那契数列是:%d",n,fun(n));
    return 0;
}