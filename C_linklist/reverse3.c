//字符串反转
#include<stdio.h>
#include<string.h>
void reverse(char *str){
    char *p=str,ch;
    while(*p){
        p++;
    }
    p--;
    //前后两个指针，以此向中间靠拢，并交换数据
    while(str<p){
        ch=*str;
        *str++=*p;
        *p--=ch;
    }
}
int main(){
    char str[50];
    printf("请输入字符串：\n");
    if(fgets(str,sizeof(str),stdin)==NULL){
        printf("输入错误");
        return 1;
    }
    reverse(str);
    printf("反转后的字符串是：%s",str);
    return 0;
}