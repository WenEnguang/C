#include<stdio.h>
#include<string.h>
//向文件中写入指定字符1.0
/*
int main(){
    FILE *fp;
    fp=fopen("E:\\C_file\\test.txt","w");
    if(fp==NULL){
        printf("file open error");
        return 1;
    }
    fprintf(fp,"hello world");
    fclose(fp);
    return 0;
}
*/
//向文件中写入指定字符2.0
int main(){
    FILE *fp;
    char ch[100];
    fp=fopen("E:\\C\\C_file\\change.txt","w");
    if(fp==NULL){
        printf("file open error");
        return 1;
    }
    printf("input a string:\n");
    if(fgets(ch,sizeof(ch),stdin)==NULL){
        printf("input error");
        return 1;
    }
    fputs(ch,fp);
    fclose(fp);
    return 0;
}