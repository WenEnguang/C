#include<stdio.h>
#include<ctype.h>
//从键盘输入一串数据，将其中的大写字符转为小写
int main(){
    FILE *fp;
    char str[100];
    //打开文件
    fp=fopen("E:\\C_file\\change.txt","w");
    if(fp==NULL){
        printf("file open error");
        return 1;
    }
    //从键盘输入字符串
    if((fgets(str,sizeof(str),stdin))==NULL){
        printf("input error");
        return 1;
    }
    //转换
    for(int i=0;str[i]!='\0';i++){
        if(isupper(str[i])){
            str[i]=tolower(str[i]);
        }
    }
    //输出到文件
    fputs(str,fp);
    fclose(fp);
    return 0;
}