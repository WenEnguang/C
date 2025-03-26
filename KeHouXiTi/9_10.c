//编写函数来实现大小写转换
#include<stdio.h>
char *fun(char *a){
    int i=0;
    while(a[i]!='\0'){
        a[i]=a[i]-32;
        i++;
    }
    return a;
}
int main(){
    char a[20];
    if((fgets(a,sizeof(a),stdin))==NULL){
        printf("输入信息失败！");
        return 1;
    }
    fun(a);
    puts(a);
    return 0;
}
