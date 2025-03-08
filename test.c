#include<stdio.h>
#include<string.h>
struct STU{
    char name[10];
    int num;
};
void f1(char *name,int num){
    struct STU s[2]={{"wen",20041},{"Penghua",20042}};
    strcpy(name,s[0].name);
    num=s[0].num;
}
void f2(struct STU *q){
    struct STU s[2]={{"liming",20043},{"zhang",20044}};
    strcpy(q->name,s[0].name);
    q->num=s[0].num;
}
int main(){
    struct STU s[2]={{"YangSan",20045},{"LiSiGuo",20046}},*p;
    p=&s[1];
    f1(p->name,p->num);
   // f2(&s[0]);
    printf("%s %d\n",s[0].name,s[0].num);
    printf("%s %d\n",p->name,p->num);
    return 0;
}
