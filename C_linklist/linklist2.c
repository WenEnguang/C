//单链表，由小到大排序
#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
int main(){
    struct Node *p=NULL,*head=NULL,*tail=NULL;
    p=(struct Node *)malloc(sizeof(struct Node));
    head=p;
    tail=p;
    int n,i;
    //输入数据规模
    printf("输入数据规模:\n");
    scanf("%d",&n);
    //输入数据
    printf("输入数据:\n");
    for(i=0;i<n;i++){
        p=(struct Node *)malloc(sizeof(struct Node));
        scanf("%d",&p->data);
        tail->next=p;
        tail=p;
        tail->next=NULL;
    }
    //选择排序，由大到小
    struct Node *current=head;
    while(current!=NULL){
        struct Node *maxNode=current;
        struct Node *temp=current->next;
        while(temp!=NULL){
            if(temp->data<maxNode->data){
                maxNode=temp;
            }
            temp=temp->next;
        }
        //交换数据
        int t=current->data;
        current->data=maxNode->data;
        maxNode->data=t;

        //"哨兵"节点后移
        current=current->next;
    }
    //输出
    p=head->next;
    while(p!=NULL){
        printf("%d ",p->data);
        p=p->next;
    }
    //释放链表内存
    while(head!=NULL){
        p=head;
        head=head->next;
        free(p);
    }
    return 0;
}