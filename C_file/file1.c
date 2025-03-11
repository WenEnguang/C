#include<stdio.h>
// 删除文件中的t字符
int main(){
    FILE *fp;
    char ch,buffer[1024];
    int i=0;
    fp=fopen("E:\\C_file\\file.txt","r+");
    if(fp==NULL){
        printf("file open error");
        return 1;
    }
    while((ch=fgetc(fp))!=EOF){
        if(ch!='t')
            buffer[i++]=ch;
    }
    fp=fopen("E:\\C_file\\file.txt","w");
    for(int j=0;j<i;j++)
        fputc(buffer[j],fp);
    fclose(fp);
    return 0;
}