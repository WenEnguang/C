//用数组存储x的10次多项式的各项系数，输入多个x，分别用秦九韶公式计算对应的多项式值。
#include<stdio.h>
double fun(double *a,double x){
    int i;
    double t;
    t=a[0];
    for(i=1;i<10;i++){
        t=t*x+a[i];
    }
    return t;
}
int main(){
    double a[10]={1,2,3,4,5,6,7,8,9,10};
    double x;
    while(1){
        printf("请输入数据X:\n");
        scanf("%lf",&x);
        printf("%f",fun(a,x));
        if(x==-1)   break;
    }
    return 0;
}