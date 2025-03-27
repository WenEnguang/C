//从标准输入（stdin）读取一行字符，并将其写入到指定的文件中。
#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *fp;
    char a[1024];
    int i=0;
    if((fp=fopen("E:\\c\\abc.txt","w+"))==NULL){
        printf("open file error");
        return 1;
    }
    if(fgets(a,sizeof(a),stdin)==NULL){
        printf("input error");
        return 1;
    }
    while(a[i]!='\0'){
        fputc(a[i],fp);
        i++;
    }
    fclose(fp);
    return 0;
}
