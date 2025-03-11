#include<stdio.h>
#include<stdlib.h>
/* 选择排序 */
/*
int main(){
    int i,index,k,n,temp;
    int a[10];
    printf("Enter the size of array:\n");
    scanf("%d",&n);
    printf("Enter the elements of array:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    //对n个数进行排序
    for(k=0;k<n-1;k++){
        index=k;
        for(i=k+1;i<n;i++){
            if(a[i]<a[index]){
                index=i;
            }
        }
        temp=a[k];
        a[k]=a[index];
        a[index]=temp;
    }
    printf("The sorted array is:\n");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    return 0;
}
*/
typedef struct Student{
    char sno[20];
    char sname[20];
    char ssex[10];
    int age;
    struct Student *next;
}STU;
int main(){
    STU *head,*tail,*p;
    int i,n,age;
    printf("请输入学生规模:\n");
    scanf("%d",&n);
    p=(STU *)malloc(sizeof(STU));
    head=p;
    tail=p;
    head->next=NULL;
    for(i=0;i<n;i++){
        p=(STU *)malloc(sizeof(STU));
        printf("第%d位学生学号:\n",i+1);
        scanf("%s",p->sno);
        printf("第%d位学生姓名:\n",i+1);
        scanf("%s",p->sname);
        printf("第%d位学生性别:\n",i+1);
        scanf("%s",p->ssex);
        printf("第%d位学生年龄:\n",i+1);
        scanf("%d",&p->age);
        tail->next=p;
        tail=p;
        tail->next=NULL;
    }
    printf("-----------学生信息输出------------\n");
    p=head->next;
    while(p!=NULL){
        printf("学号:%s 姓名：%s 性别:%s 年纪：%d\n",p->sno,p->sname,p->ssex,p->age);
        p=p->next;
    }
    printf("-----------学生信息删除------------\n");
    printf("请输入要删除的学生年纪：\n");
    scanf("%d",&age);
    STU *current=head->next;
    STU *prev=head;
    while(current!=NULL){
        if(current->age==age){
            prev->next=current->next;
            free(current);
            current=prev->next;
        }else{
            prev=current;
            current=current->next;
        }
    }

    printf("-----------删除学生信息之后输出------------\n");
    p=head->next;
    while(p!=NULL){
        printf("学号:%s 姓名：%s 性别:%s 年纪：%d\n",p->sno,p->sname,p->ssex,p->age);
        p=p->next;
    }
    return 0;
}