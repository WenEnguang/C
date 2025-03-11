#include<stdio.h>
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