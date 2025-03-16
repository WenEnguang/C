//在文件中查找指定内容
#include<stdio.h>
int main(){
    FILE *fp;
    char name[20],data[20];
    int flag;
    fp=fopen("E:\\C\\C_file\\information.txt","a+");
    if(fp==NULL){
        printf("文件打开失败");
        return 1;
    }
    do{
        printf("enter name:\n");
        fgets(name,20,stdin);
        if(strcmp(name,"#")==0)
            break;
        strcat(name,'\n');
        rewind(fp);
        flag=1;
        while(flag&&fgets(data,20,fp)!=NULL)
            if(strcmp(data,name)==0)
                flag=1;
        if(flag)
            fputs(name,fp);
        else
            printf("not found\n");
    }while(ferror(fp)==0);
    fclose(fp);
    return 0;
}